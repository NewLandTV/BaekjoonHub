#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a;
	int f17, f18;
	
	scanf("%d", &n);
	
	while (n--)
	{
		f17 = f18 = 0;
		
		for (i = 0; i < 10; i++)
		{
			scanf("%d", &a);
			
			if (a == 17)
			{
				f17 = 1;
			}
			else if (a == 18)
			{
				f18 = 1;
			}
			
			printf("%d ", a);
		}
		
		printf("\n");
		
		if (f17)
		{
			printf("%s\n", f18 ? "both" : "zack");
		}
		else
		{
			printf("%s\n", f18 ? "mack" : "none");
		}
		
		printf("\n");
	}
	
	return 0;
}