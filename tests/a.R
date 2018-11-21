library(locale)

loc = Sys.getlocale()
foo(1)
stopifnot(identical(loc, Sys.getlocale()))

# Blow the C stack with recursive call.
# Check locale is reset.
istack()
stopifnot(identical(loc, Sys.getlocale()))

bar()
# Interrupt.
stopifnot(identical(loc, Sys.getlocale()))


