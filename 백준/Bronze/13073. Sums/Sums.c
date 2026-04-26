#include <stdio.h>

int main(void)
{
	int t;
	int n;
	int s1, s2, s3;
	
	for (scanf("%d", &t); t > 0; t--)
	{
		scanf("%d", &n);
		
		s1 = n * (n + 1) >> 1;
		s2 = n * n;
		s3 = n * n + n;
		
		printf("%d %d %d\n", s1, s2, s3);
	}
	
	return 0;
}