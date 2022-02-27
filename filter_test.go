package ntt_test

import (
	"strings"
	"testing"

	"github.com/nokia/ntt"
	"github.com/nokia/ntt/ttcn3/doc"
)

func TestBasketMatch(t *testing.T) {
	tests := []struct {
		basket string
		name   string
		tags   []string
		want   bool
	}{
		{basket: "", name: "", want: true},
		{basket: "", name: "", tags: []string{"@wip"}, want: true},
		{basket: "", name: "foo", want: true},
		{basket: "", name: "foo", tags: []string{"@wip"}, want: true},

		{basket: "-r fo.", name: "foobar", want: true},
		{basket: "-r foo|bar", name: "bar", want: true},
		{basket: "-r foo", name: "bar", want: false},

		{basket: "-x fo.", name: "foo", want: false},
		{basket: "-r foo -r bar", name: "foo", want: false},
		{basket: "-r foo -r bar", name: "foobar", want: true},
		{basket: "-r foo -x bar", name: "foobar", want: false},
		{basket: "-x foo -r bar", name: "foobar", want: false},
		{basket: "-x foo|bar", name: "bar", want: false},
		{basket: "-x foo", name: "bar", want: true},

		{basket: "-R foo", tags: []string{"@foo bar"}, want: true},
		{basket: "-R foo:bar", tags: []string{"@foo bar"}, want: true},
		{basket: "-R :bar", tags: []string{"@foo bar"}, want: true},
		{basket: "-R :bar", tags: []string{"@foo", "@bar"}, want: false},
		{basket: "-R bar", tags: []string{"@foo bar"}, want: false},
		{basket: "-R bar", tags: []string{"@foo", "@bar"}, want: true},

		{basket: "-R foo|bar", tags: []string{"@foo", "@bar"}, want: true},
		{basket: "-R foo -R bar", tags: []string{"@foo", "@bar"}, want: true},
		{basket: "-R foo -R wip", tags: []string{"@foo", "@bar"}, want: false},
		{basket: "-R foo -R bar|wip", tags: []string{"@foo", "@bar"}, want: true},
		{basket: "-R foo -X bar", tags: []string{"@foo", "@bar"}, want: false},
		{basket: "-X bar -R foo", tags: []string{"@foo", "@bar"}, want: false},
		{basket: "-R foo -X wip", tags: []string{"@foo", "@bar"}, want: true},
		{basket: "-R foo -X foo", tags: []string{"@foo", "@bar"}, want: false},
		{basket: "-R foo|wip -R bar", tags: []string{"@foo", "@bar"}, want: true},

		{basket: "-r foo -X @wip", name: "foo", tags: []string{"@foo"}, want: true},
		{basket: "-r foo -X @foo", name: "foo", tags: []string{"@foo"}, want: false},
		{basket: "-x foo -X @foo", name: "foo", tags: []string{"@foo"}, want: false},
		{basket: "-x foo -X @wip", name: "foo", tags: []string{"@foo"}, want: false},
		{basket: "-x foo -R @foo", name: "foo", tags: []string{"@foo"}, want: false},
	}

	for _, tt := range tests {
		b, err := ntt.NewBasket("testBasket", strings.Fields(tt.basket)...)
		if err != nil {
			t.Fatal(err)
		}
		actual := b.Match(tt.name, doc.FindAllTags(strings.Join(tt.tags, "\n")))
		if actual != tt.want {
			t.Errorf("Basket(%q).Match(%q, %q) = %v, want %v", tt.basket, tt.name, tt.tags, actual, tt.want)
		}
	}
}

func TestSubBaskets(t *testing.T) {
	tests := []struct {
		basket string
		name   string
		tags   []string
		want   bool
	}{
		{basket: "-r foo:-r bar", name: "foo", want: true},
		{basket: "-r foo:-r bar", name: "bar", want: true},
		{basket: "-r foo:-x foo", name: "foo", want: true},
		{basket: "-r foo -x bar:-x foo", name: "foobar", want: false},
		{basket: "-r foo:-x foo:-x foo", name: "foobar", want: true},
		{basket: "-r foo:-x foo:-x bar", name: "foobar", want: true},
	}

	for _, tt := range tests {

		b, err := ntt.NewBasket("testBasket")
		if err != nil {
			t.Fatal(err)
		}

		for _, s := range strings.Split(tt.basket, ":") {
			sb, err := ntt.NewBasket("subBasket", strings.Fields(s)...)
			if err != nil {
				t.Fatal(err)
			}
			b.Baskets = append(b.Baskets, sb)
		}

		actual := b.Match(tt.name, doc.FindAllTags(strings.Join(tt.tags, "\n")))
		if actual != tt.want {
			t.Errorf("Basket(%q).Match(%q, %q) = %v, want %v", tt.basket, tt.name, tt.tags, actual, tt.want)
		}
	}
}
