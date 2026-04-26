#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	int n, p;
	int a;
	int s = 0;
	
	scanf("%d", &n);
	scanf("%d", &p);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		
		a = pow(a, p);
		
		if (a > 0)
		{
			s += a;
		}
	}
	
	printf("%d", s);
	
	return 0;
}