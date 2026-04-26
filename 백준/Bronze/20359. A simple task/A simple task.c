#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	int o, p;
	int x;
	
	scanf("%d", &n);
	
	for (o = 1;; o += 2)
	{
		for (p = 0;; p++)
		{
			x = o * (int)pow(2, p);
			
			if (n < x)
			{
				break;
			}
			else if (n == x)
			{
				printf("%d %d", o, p);
				
				return 0;
			}
		}
	}
	
	return 0;
}