#include <stdio.h>

int main(void)
{
	int q;
	int a, b;
	int inner, outer;
	
	scanf("%d", &q);
	
	while (q--)
	{
		scanf("%d %d", &a, &b);
		
		inner = outer = a;
		
		while (1)
		{
			inner++;
			outer--;
			
			if (inner > 243)
			{
				inner = 201;
			}
			
			if (outer < 201)
			{
				outer = 243;
			}
			
			if (inner == outer && inner == b)
			{
				printf("Same\n");
				
				break;
			}
			else if (inner == b)
			{
				printf("Inner circle line\n");
				
				break;
			}
			else if (outer == b)
			{
				printf("Outer circle line\n");
				
				break;
			}
		}
	}
	
	return 0;
}