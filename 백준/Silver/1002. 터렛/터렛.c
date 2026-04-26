#include <stdio.h>

int main(void)
{
	int t;
	int x1, y1, r1, x2, y2, r2;
	int s, diff;
	int dist;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		
		s = (r1 + r2) * (r1 + r2);
		diff = (r1 - r2) * (r1 - r2);
		dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		
		if (dist == 0 && diff == 0)
		{
			printf("-1\n");
		}
		else if (dist == s || dist == diff)
		{
			printf("1\n");
		}
		else if (dist < s && dist > diff)
		{
			printf("2\n");
		}
		else
		{
			printf("0\n");
		}
	}
	
	return 0;
}