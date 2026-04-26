#include <stdio.h>

int main(void)
{
	int n, a;
	int b, s = 0;
	
	scanf("%d %d", &n, &a);
	
	while (n--)
	{
		scanf("%d", &b);
		
		s += b / a;
	}
	
	printf("%d", s);
	
	return 0;
}