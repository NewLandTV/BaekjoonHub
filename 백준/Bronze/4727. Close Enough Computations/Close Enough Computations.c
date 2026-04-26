#include <stdio.h>
#include <math.h>

int main(void)
{
	int calorie, f, c, p;
	int min, max;
	
	while (1)
	{
		scanf("%d %d %d %d", &calorie, &f, &c, &p);
		
		if (calorie == 0 && f == 0 && c == 0 && p == 0)
		{
			break;
		}
		
		if (f == 0)
		{
			f = 1;
		}
		if (c == 0)
		{
			c = 1;
		}
		if (p == 0)
		{
			p = 1;
		}
		
		min = (c + p) * 8 + f * 18 - 17;
		max = (c + p) * 8 + f * 18 + 17;
		calorie <<= 1;
		
		printf("%s\n", min <= calorie && calorie <= max ? "yes" : "no");
	}
	
	return 0;
}