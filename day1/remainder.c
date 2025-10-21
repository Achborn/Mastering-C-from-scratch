#include <stdio.h>

int	main(void)
{
	int	r;
	int	e;
	int	res;
	int	res2;

	r = 8;
	e = 3;
	res2 = r / e;
	printf("%d / %d = %d\n", r, e, res2);
	res = r % e;
	printf("Remainder of %d is: %d\n", res2, res);
}
