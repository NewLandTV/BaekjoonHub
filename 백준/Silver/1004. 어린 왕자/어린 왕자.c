#include <stdio.h>
#include <math.h>

int main(void)
{
	int t;
	int x1, y1, x2, y2;
	int n;
	int cx, cy, r;
	int start;
	int end;
	int count;
	
	scanf("%d", &t);
	
	while (t--)
	{
		count = 0;
		
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &n);
		
		while (n--)
		{
			scanf("%d %d %d", &cx, &cy, &r);
			
			start = sqrt(pow(cx - x1, 2) + pow(cy - y1, 2)) <= r;
			end = sqrt(pow(cx - x2, 2) + pow(cy - y2, 2)) <= r;
			
			if (start != end)
			{
				count++;
			}
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}