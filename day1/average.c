#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	z;
	int	avr;

	x = 5;
	y = 2;
	z = 44;
	avr = (x + y + z) / 3;
	printf("Average of three numbers is: %d\n", avr);
	return (0);
}
