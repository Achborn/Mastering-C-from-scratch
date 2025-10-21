#include <stdio.h>

int	main(void)
{
	int	j;
	int	k;
	int	*p1;
	int	*p2;
	int	tmp;

	j = 20;
	k = 40;
	tmp = 0;
	p1 = &j;
	p2 = &k;
	printf("%d\t%d\n", j, k);
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	printf("%d\t%d\n", j, k);
}
