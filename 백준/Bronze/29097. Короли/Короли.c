#include <stdio.h>

int main(void)
{
	int n, m, k, a, b, c;
	int j, r, s;
	
	scanf("%d %d %d %d %d %d", &n, &m, &k, &a, &b, &c);
	
	j = a * n;
	r = b * m;
	s = c * k;
	
	if (j == r && r == s)
	{
		printf("Joffrey Robb Stannis");
	}
	else if (j == r && s < j)
	{
		printf("Joffrey Robb");
	}
	else if (j == s && r < j)
	{
		printf("Joffrey Stannis");
	}
	else if (r == s && j < r)
	{
		printf("Robb Stannis");
	}
	else if (j > r && j > s)
	{
		printf("Joffrey");
	}
	else if (r > j && r > s)
	{
		printf("Robb");
	}
	else
	{
		printf("Stannis");
	}
	
	return 0;
}