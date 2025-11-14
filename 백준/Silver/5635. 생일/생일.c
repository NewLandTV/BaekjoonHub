#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char name[100][16];
	int d, m, y;
	int minD = 31, minM = 12, minY = 2010;
	int maxD = 1, maxM = 1, maxY = 1990;
	int min = 0, max = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", name[i], &d, &m, &y);
		
		if (minY > y || (minY == y && minM > m) || (minM == m && minD > d))
		{
			minY = y;
			minM = m;
			minD = d;
			min = i;
		}
		
		if (maxY < y || (maxY == y && maxM < m) || (maxM == m && maxD < d))
		{
			maxY = y;
			maxM = m;
			maxD = d;
			max = i;
		}
	}
	
	printf("%s\n", name[max]);
	printf("%s", name[min]);
	
	return 0;
}