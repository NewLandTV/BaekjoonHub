#include <stdio.h>

int main(void)
{
	int n, m, l;
	int c = 0, cur = 0;
	int b[50] = { 0, };
	
	scanf("%d %d %d", &n, &m, &l);
	
	for (b[cur] = 1; b[cur] != m; b[cur]++, c++)
	{
		if (b[cur] & 1)
		{
			cur = (cur + l) % n;
		}
		else
		{
			cur = (n + (cur - l)) % n;
		}
	}
	
	printf("%d", c);
	
	return 0;
}