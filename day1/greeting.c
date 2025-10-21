#include <stdio.h>

int main(void)
{
	char name[14] = "";
	
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);

	printf("> Greetings %s", name);
}
