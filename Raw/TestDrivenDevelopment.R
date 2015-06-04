library(testit)

assert(is.integer(2))

is_integer <- function(N){
    !grepl("[^[:digit:]]", format(N,  digits = 20, scientific = FALSE))
}

IsPrimeDumb <- function(x)
{
	if (!is_integer(x)) return (FALSE)
	if (x == 2) return (TRUE)
  for (i in seq(2,x-1))
  {
    if (x %% i == 0) return (FALSE);
  }
	return (TRUE)	
}

IsPrime <- function(x)
{
	if (!is_integer(x)) return (FALSE)
	if (x == 2) return (TRUE)
  for (i in seq(2,sqrt(x)))
  {
    if (x %% i == 0) return (FALSE);
  }
	return (TRUE)	
}

# Needed for development
assert(IsPrimeDumb(2))
assert(!IsPrimeDumb(4))
assert(!IsPrimeDumb("HELLO"))

# Needed for development
assert(IsPrime(2))
assert(!IsPrime(4))
assert(!IsPrime("HELLO"))

# Just to be sure
assert(!IsPrimeDumb(1))
assert(!IsPrimeDumb(0))
assert(!IsPrimeDumb(-1))
assert(!IsPrimeDumb(13 * 11))
assert(IsPrimeDumb(3559))
assert(!IsPrimeDumb(3561))
assert(IsPrimeDumb(3571))
 	

# Just to be sure
assert(!IsPrime(1))
assert(!IsPrime(0))
assert(!IsPrime(-1))
assert(IsPrime(11))
assert(IsPrime(13))
assert(!IsPrime(13 * 11))
assert(IsPrime(3559))
assert(!IsPrime(3561))
assert(IsPrime(3571))
 	
