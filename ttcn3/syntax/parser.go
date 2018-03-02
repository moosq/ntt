//go:generate bison -r all parser.y -o parser.c
package syntax

import (
    "errors"
)

/*
#cgo CFLAGS: -O2
#include "parser.h"
*/
import "C"

func Parse(filename string, source interface{}) error {
    src, err := NewSource(filename, source)
    if err != nil {
        return err
    }

    ret := C.parse(src.hndl)
    if (ret != 0) {
        return errors.New("syntax error")
    }

    return nil
}
