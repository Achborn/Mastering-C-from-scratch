#include <stdio.h>

int main(void)
{
	int c, d;
	char op;
	double res;

	printf("Enter first number: ");
	scanf("%d", &c);

	printf("Choose operation (+, -, *, /, %%): ");
	scanf(" %c", &op);

	printf("Enter second number: ");
	scanf("%d", &d);

	switch (op)
	{
		case '+':
			res = c + d;
			printf("%d + %d = %f\n", c, d, res);
			break;

		case '-':
			res = c - d;
			printf("%d - %d = %f\n", c, d, res);
			break;

		case '*':
			res = c * d;
			printf("%d * %d = %f\n", c, d, res);
			break;

		case '/':
			if (d == 0) 
			{
				printf("Cannot divide by zero..\n");
			}else {
				res = c / d;
				printf("%d / %d = %f\n", c, d, res);
			}
			break;
		case '%':
			if (d == 0) {
				puts("Error!");
			}else {
				res = c % d;
				printf("%d %% %d = %f\n", c, d, res);
			}
			break;
		default:
			printf("Error! operator is not correct\n");
	}
	return 0;
}
