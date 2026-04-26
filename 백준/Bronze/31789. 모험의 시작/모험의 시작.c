#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int x, s;
	int c, p;
	
	scanf("%d", &n);
	scanf("%d %d", &x, &s);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &c, &p);
		
		if (x >= c && s < p)
		{
			printf("YES");
			
			return 0;
		}
	}
	
	printf("NO");
	
	return 0;
}