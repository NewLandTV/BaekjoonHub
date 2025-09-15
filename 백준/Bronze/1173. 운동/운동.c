#include <stdio.h>

#define Max(a, b) (a > b ? a : b)

int main(void)
{
	int total;
	int n, m, largeM, t, r;
	int prev, pulse;
	int tCount = 0;
	
	scanf("%d %d %d %d %d", &n, &m, &largeM, &t, &r);
	
	for (total = 0, pulse = m; tCount < n; total++)
	{
		prev = pulse;
		
		if (pulse + t > largeM)
		{
			pulse = Max(pulse - r, m);
			
			if (prev == pulse)
			{
				printf("-1");
				
				return 0;
			}
			
			continue;
		}
		
		pulse += t;
		tCount++;
	}
	
	printf("%d", total);
	
	return 0;
}