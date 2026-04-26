#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char d[16];
	int c[1000];
	int jinju;
	int count = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s %d", d, &c[i]);
		
		if (strcmp(d, "jinju") == 0)
		{
			jinju = c[i];
			
			printf("%d\n", c[i]);
		}
	}
	
	for (i = 0; i < n; i++)
	{
		if (jinju < c[i])
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}