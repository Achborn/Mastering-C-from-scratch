#include <stdio.h>

#define PI 3.14

int	main(void)
{
	double	raduis;
	double	area;

	raduis = 0.0;
	area = 0.0;
	printf("Enter raduis of a circle: ");
	scanf("%lf", &raduis);
	area = PI * raduis * raduis;
	printf("Area of circle: %.2lf", area);
	return (0);
}
