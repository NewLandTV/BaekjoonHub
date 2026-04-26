#include <stdio.h>

int main(void)
{
	int n;
	int a, b, c;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d %d", &a, &b, &c);
		printf("%d %d %d\n", a, b, c);
		
		if (a < 10 && b < 10 && c < 10)
		{
			printf("zilch");
		}
		else if (a >= 10 && b >= 10 && c >= 10)
		{
			printf("triple-double");
		}
		else if ((a >= 10 && b >= 10) || (b >= 10 && c >= 10) || (a >= 10 && c >= 10))
		{
			printf("double-double");
		}
		else
		{
			printf("double");
		}
		
		printf("\n\n");
	}
	
	return 0;
}