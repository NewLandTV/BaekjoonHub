#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	int a, b, c;
	char s;
	double l;
	
	for (i = 1; ; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		
		printf("Triangle #%d\n", i);
		
		if (a == -1)
		{
			s = 'a';
			l = c * c - b * b;
		}
		else if (b == -1)
		{
			s = 'b';
			l = c * c - a * a;
		}
		else
		{
			s = 'c';
			l = a * a + b * b;
		}
		
		if (l <= 0)
		{
			printf("Impossible.\n\n");
		}
		else
		{
			printf("%c = %.3f\n\n", s, sqrt(l));
		}
	}
	
	return 0;
}