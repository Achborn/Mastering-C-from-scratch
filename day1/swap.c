#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 7;
	printf("%d\t\t%d\n", a, b);
	a = b ^ a;
	a = b ^ a;
	printf("%d\t\t%d\n", b, a);
}
