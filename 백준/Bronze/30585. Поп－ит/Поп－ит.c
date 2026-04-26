#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int i, j;
	int h, w;
	char s[100][101];
	int one = 0, zero = 0;
	
	scanf("%d %d", &h, &w);
	
	for (i = 0; i < h; i++)
	{
		scanf(" %s", s[i]);
	}
	
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			s[i][j] == '1' ? one++ : zero++;
		}
	}
	
	printf("%d", Min(one, zero));
	
	return 0;
}