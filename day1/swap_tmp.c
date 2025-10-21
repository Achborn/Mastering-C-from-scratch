#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	tmp;

	a = 10;
	b = 20;
	tmp = 0;
	printf("%d\t%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("%d\t%d\n", a, b);
}
