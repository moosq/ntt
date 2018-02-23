//go:generate flex scanner.l
package syntax

import (
	"errors"
)

/*
#cgo CFLAGS: -O2
#include "scanner.h"
*/
import "C"

type Token C.tok_t

func (t Token) String() string {
    return "token"
}

type Scanner struct {
	s   *C.scanner_t
	src *Source
}

func NewScanner(filename string, src interface{}) (s *Scanner, err error) {
    s = new(Scanner)
	s.src, err = NewSource(filename, src)
	if err != nil {
		return
	}

	s.s = C.scanner_new(s.src.hndl, nil)
	if s.s == nil {
		return nil, errors.New("could not create scanner")
	}

	return
}

func (s *Scanner) Scan() (Token, uint, uint) {
    var b,e C.uint
    t := C.scan(s.s, &b, &e)
    return Token(t), uint(b), uint(e)
}
