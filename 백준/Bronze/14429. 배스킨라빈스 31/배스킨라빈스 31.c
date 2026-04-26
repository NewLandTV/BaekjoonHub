#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int j, m;
	int r, c;
	int num = 1, min = 10000;
	
	scanf("%d", &n);
	
	for (i = c = 1; i <= n; i++, c = 1)
	{
		scanf("%d %d", &j, &m);
		
		for (r = (j - 1) % (m + 1); r != j - 1; r = r + 1 + m, c += 2);
		
		if (min > ++c)
		{
			num = i;
			min = c;
		}
	}
	
	printf("%d %d", num, min);
	
	return 0;
}