#include <Rdefines.h>

SEXP
foo(SEXP r_val)
{
    return( ScalarInteger( asInteger(r_val) + 1)); 
}

SEXP
bar()
{
    while(1) {
	R_CheckUserInterrupt();
    }
    return(ScalarLogical(1));
}

int
s(int val)
{
    return(s(val + 1));
}

SEXP
istack()
{
    return(ScalarInteger(s(1)));
}
