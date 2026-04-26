#include <stdio.h>

int main(void)
{
	int n, m;
	int ac, d;
	int sr, sc;
	
	scanf("%d %d", &n, &m);
	scanf("%d %d", &ac, &d);
	scanf("%d %d", &sr, &sc);
	
	if (d == 0)
	{
		if (sc <= ac && sr == 1)
		{
			printf("NO...");
			
			return 0;
		}
		
		if (n & 1)
		{
			printf("%s", sc != m && sr == n ? "YES!" : "NO...");
			
			return 0;
		}
		
		printf("NO...");
		
		return 0;
	}
	
	if (sc >= ac && sr == 1)
	{
		printf("NO...");
	}
	
	if (n & 1)
	{
		printf("NO...");
		
		return 0;
	}
	
	printf("%s", sc != m && sr == n ? "YES!" : "NO...");
	
	return 0;
}