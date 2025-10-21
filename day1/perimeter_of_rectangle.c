#include <stdio.h>

int	main(void)
{
	double	l;
	double	w;
	double	p;

	l = 0.0;
	w = 0.0;
	p = 0.0;
	printf("Enter length of rectangle: ");
	scanf("%lf", &l);
	printf("Enter width of rectangle: ");
	scanf("%lf", &w);
	p = 2 * (l + w);
	printf("Perimeter of rectangle: %.1lf\n", p);
	return (0);
}
