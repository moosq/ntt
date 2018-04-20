package syntax

import (
	"testing"
    "fmt"
)

func TestModule(t *testing.T) {
    modules := []string{
        `module m {}`,
    }

    for i, src := range modules {
        name := fmt.Sprintf("modules[%d]", i);
        err := Parse (name, src)
        if err != nil {
            t.Errorf("%s: %s", name, err)
        }
    }
}

func TestCoreLanguage(t *testing.T) {
    err := Parse ("testdata/etsi-conformance.ttcn3", nil)
    if err != nil {
        t.Errorf("error parsing testdata/etsi-conformance.ttcn3")
    }
}
