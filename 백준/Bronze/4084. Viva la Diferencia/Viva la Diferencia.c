#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c, d;
	int temp;
	int count;
	
	while (1)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		
		if (a == 0 && b == 0 && c == 0 && d == 0)
		{
			break;
		}
		
		for (count = 0; a != b || a != c || a != d || b != c || b != d || c != d; count++)
		{
			temp = a;
			a = abs(a - b);
			b = abs(b - c);
			c = abs(c - d);
			d = abs(d - temp);
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}