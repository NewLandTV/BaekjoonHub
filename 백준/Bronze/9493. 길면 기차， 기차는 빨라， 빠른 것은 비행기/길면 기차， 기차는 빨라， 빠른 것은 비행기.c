#include <stdio.h>
#include <math.h>

int main(void)
{
	int m, a, b;
	int t;
	int hour, min, sec;
	
	while (1)
	{
		scanf("%d %d %d", &m, &a, &b);
		
		if (m == 0 && a == 0 && b == 0)
		{
			break;
		}
		
		t = round(((float)m / a - (float)m / b) * 3600);
		hour = t / 3600;
		min = (t % 3600) / 60;
		sec = t % 60;
		
		printf("%01d:%02d:%02d\n", hour, min, sec);
	}
	
	return 0;
}