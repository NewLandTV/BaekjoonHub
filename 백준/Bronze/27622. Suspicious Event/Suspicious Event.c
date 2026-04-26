#include <stdio.h>

#define Abs(x) (x < 0 ? -x : x)

int main(void)
{
	int i;
	int n;
	int a[1000] = { 0, };
	int count = 0;
	int x;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		
		if (x < 0)
		{
			count++;
			
			if (a[Abs(x) - 1] == 1)
			{
				count--;
				a[Abs(x) - 1] = 0;
				
				continue;
			}
			
			a[Abs(x) - 1] = -1;
			
			continue;
		}
		
		if (a[x - 1] == -1)
		{
			a[x - 1] = 0;
			
			continue;
		}
		
		a[x - 1] = 1;
	}
	
	printf("%d", count);
	
	return 0;
}