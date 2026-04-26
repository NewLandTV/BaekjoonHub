#include <stdio.h>

int main(void)
{
	int b;
	int s, n, f, m;
	
	scanf("%d", &b);
	
	while (b--)
	{
		scanf("%d %d %d %d", &s, &n, &f, &m);
		
		s -= m;
		
		printf("%s\n", s >= n && s <= n * f ? "YES" : "NO");
	}
	
	return 0;
}