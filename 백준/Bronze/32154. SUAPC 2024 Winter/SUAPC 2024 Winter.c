#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	if (n == 1)
	{
		printf("11\n");
	}
	else if (n <= 4)
	{
		printf("9\n");
	}
	else
	{
		printf("8\n");
	}
	
	printf("A ");
	
	switch (n)
	{
	case 1:
		printf("B C D E F G H J");
		
		break;
	case 2:
	case 3:
		printf("C E F G H I");
		
		break;
	case 4:
		printf("B C E F G H");
		
		break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		printf("C E F G H");
		
		break;
	case 10:
		printf("B C F G H");
		
		break;
	}
	
	printf(" L M");
	
	return 0;
}