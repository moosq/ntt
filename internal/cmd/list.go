package cmd

import (
	"fmt"
	"github.com/nokia/ntt/internal/loader"
	"github.com/nokia/ntt/ttcn3/syntax"
	"github.com/spf13/cobra"
	"os"
	"path/filepath"
	"strings"
)

var (
	listModules bool
	listImports bool

	listCmd = &cobra.Command{
		Use:   `list [MODULES]`,
		Short: `List various types of objects`,
		Long: `List various types of objects.

Default output shows the testcase names in current directory.
MODULES is a module path specification. Currently this is interpreted as a file system path. Directories are scanned recursively.


Examples:

    # List all tests in current directory
    ntt list

    # List all modules in current directory
    ntt list --modules

    # List imports of specific files in testcases-directory
    ntt list --imports testcases/IPv6_*.ttcn3
`,
		RunE: list,
	}
)

func init() {
	listCmd.Flags().BoolVarP(&listModules, "modules", "m", false, "list modules")
	listCmd.Flags().BoolVarP(&listImports, "imports", "i", false, "list import definitions")
}

func list(cmd *cobra.Command, args []string) error {
	if len(args) == 0 {
		args = []string{"."}
	}

	sources, err := filterSources(args)
	if err != nil {
		return err
	}

	if len(sources) == 0 {
		fmt.Fprintln(os.Stderr, "no TTCN-3 files found in", strings.Join(args, ", "))
		os.Exit(1)
	}

	modules, err := loader.LoadFromFiles(sources)
	if err != nil {
		syntax.PrintError(os.Stderr, err)
	}

	for _, m := range modules {
		fmt.Println(m.Name())
	}

	return nil
}

func filterSources(list []string) (sources []string, err error) {
	for _, v := range list {
		root := filepath.Clean(v)
		err = filepath.Walk(root, func(path string, info os.FileInfo, err error) error {
			if err != nil {
				return err
			}

			if !info.Mode().IsRegular() {
				return nil
			}

			if e := filepath.Ext(path); e == ".ttcn" || e == ".ttcn3" {
				sources = append(sources, path)
			}
			return nil
		})

		if err != nil {
			break
		}
	}

	return sources, err
}
