package syntax

import (
	"bytes"
	"errors"
	"io"
	"io/ioutil"
	"unsafe"
)

/*
#cgo CFLAGS: -O2
#include "source.h"
*/
import "C"

type Source struct {
	hndl *C.src_t
}

// If src != nil, readSource converts src to a []byte if possible;
// otherwise it returns an error. If src == nil, readSource returns
// the result of reading the file specified by filename.
//
func readSource(filename string, src interface{}) ([]byte, error) {
	if src != nil {
		switch s := src.(type) {
		case string:
			return []byte(s), nil
		case []byte:
			return s, nil
		case *bytes.Buffer:
			// is io.Reader, but src is already available in []byte form
			if s != nil {
				return s.Bytes(), nil
			}
		case io.Reader:
			return ioutil.ReadAll(s)
		}
		return nil, errors.New("invalid source")
	}
	return ioutil.ReadFile(filename)
}

func NewSource(filename string, src interface{}) (s *Source, err error) {
	s = new(Source)
	b, err := readSource(filename, src)
	if err != nil {
		return nil, err
	}
	s.hndl = C.src_load_buffer(unsafe.Pointer(&b[0]), C.uint(len(b)))
	if s.hndl == nil {
		return nil, errors.New("could not load source")
	}
	C.src_set_name(s.hndl, C.CString(filename))
	return
}

func (s Source) Name() string {
	return C.GoString(C.src_name(s.hndl))
}
