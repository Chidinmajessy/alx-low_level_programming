#include <stdio.h>

int main()
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/**
	* code clause:
	* not allowed to use a
	* not allowed to modify p
	* only one statement
	* nothing else other the lines of code
	*
	*/
*(p + 5) = 98;
	/* ...so that this prints98\n*/
	printf("a[2] = %d\n", a[2]);
			return (0);
}
