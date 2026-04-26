#include <stdio.h>

int main(void)
{
	int i;
	int n, m;
	int a, b;
	int counts[100000] = { 0, };
	
	scanf("%d %d", &n, &m);
	
	while (m--)
	{
		scanf("%d %d", &a, &b);
		
		counts[a - 1] += 1;
		counts[b - 1] += 1;
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d\n", counts[i]);
	}
	
	return 0;
}