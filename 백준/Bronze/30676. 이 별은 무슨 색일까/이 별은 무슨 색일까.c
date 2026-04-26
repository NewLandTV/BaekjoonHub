#include <stdio.h>

int main(void)
{
	int lambda;
	
	scanf("%d", &lambda);
	
	if (lambda >= 620)
	{
		printf("Red");
	}
	else if (lambda >= 590)
	{
		printf("Orange");
	}
	else if (lambda >= 570)
	{
		printf("Yellow");
	}
	else if (lambda >= 495)
	{
		printf("Green");
	}
	else if (lambda >= 450)
	{
		printf("Blue");
	}
	else if (lambda >= 425)
	{
		printf("Indigo");
	}
	else if (lambda >= 380)
	{
		printf("Violet");
	}
	
	return 0;
}