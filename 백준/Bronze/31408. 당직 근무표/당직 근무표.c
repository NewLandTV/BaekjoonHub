#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	int n;
	int a;
	int max = 0;
	int c[100000] = { 0, };
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		
		c[a - 1]++;
		max = Max(max, c[a - 1]);
	}
	
	printf("%s", max > n + 1 >> 1 ? "NO" : "YES");
	
	return 0;
}