package main

import (
	"flag"
	"fmt"
	"github.com/nokia/ntt/ttcn3/syntax"
	"os"
)

func processFile(file string) {
	ast, err := syntax.ParseFile(file, func(pos syntax.Position, msg string) {
		fmt.Fprintf(os.Stderr, "%s: error: %s\n", pos, msg)
	})

	if err != nil {
		return
	}
	var p printer
	for i := range ast {
		p.print(ast[i])
	}
}

func main() {
	flag.Parse()

	for _, file := range flag.Args() {
		processFile(file)
	}

	os.Exit(0)
}
