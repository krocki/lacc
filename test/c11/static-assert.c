#if defined _Static_assert
# error Should not be defined, but valid to ask for it
#endif

#include <assert.h>

_Static_assert('a' < 'b', "Alphabet error");

int foo(char a) {
	_Static_assert(sizeof(a) == 1, "Hello");
	return 0;
}

int main(void) {
	return foo(42);
}

static_assert(1, "");
