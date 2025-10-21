#include <stdio.h>

int	main(void)
{
	float	cel;
	float	fahr;

	cel = 0.0;
	fahr = 0.0;
	printf("Enter temperature in Celsius: ");
	scanf("%f", &cel);
	fahr = (cel * 9 / 5) + 32;
	printf("Temp in Fahrenheit: %.1f°\n", fahr);
	return (0);
}
