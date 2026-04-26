#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, s;
	int l, m;
	int slowest = 1;
	
	scanf("%d %d", &n, &s);
	
	for (; n > 0; n--)
	{
		scanf("%d", &m);
		
		if (slowest < m)
		{
			slowest = m;
		}
	}
	
	printf("%d", (int)ceil(slowest * s / 1000.0));
	
	return 0;
}