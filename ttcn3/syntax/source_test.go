package syntax

import (
	"testing"
	//"os"
)

func TestSource(t *testing.T) {
	s, err := NewSource("<stdin>", "foo bar blub")
	if err != nil {
		t.Errorf("NewSource: %s", err)
	}

	if n := s.Name(); n != "<stdin>" {
		t.Errorf("invalid name. Got %s", n)
	}
}
