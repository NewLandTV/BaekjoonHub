#include <stdio.h>

int main(void)
{
	int k, n, m;
	
	scanf("%d %d %d", &k, &n, &m);
	
	if (k * n <= m)
	{
		fputc(48, stdout);
		
		return 0;
	}
	
	printf("%d", k * n - m);
	
	return 0;
}