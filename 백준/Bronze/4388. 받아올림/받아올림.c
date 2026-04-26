#include <stdio.h>
#include <string.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i, j;
	long long a, b;
	int da, db, la;
	int carry, count;
	
	while (1)
	{
		scanf("%lld %lld", &a, &b);
		
		if (a == 0 && b == 0)
		{
			break;
		}
		
		for (i = 1, j = a, da = 0; j; i *= 10, j /= 10, da++);
		for (i = 1, j = b, db = 0; j; i *= 10, j /= 10, db++);
		
		la = da > db;
		
		for (i = carry = count = 0; i < (la ? db : da); i++)
		{
			if (a % 10 + b % 10 + carry > 9)
			{
				carry = 1;
				count++;
			}
			else
			{
				carry = 0;
			}
			
			a /= 10;
			b /= 10;
		}
		
		for (i = 0; i < (la ? da - db : db - da); i++)
		{
			if ((la ? a : b) % 10 + carry > 9)
			{
				carry = 1;
				count++;
			}
			else
			{
				break;
			}
			
			if (la)
			{
				a /= 10;
			}
			else
			{
				b /= 10;
			}
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}