#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int m;
	int l, r;
	char files[1000][101];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", files[i]);
	}
	
	scanf("%d", &m);
	
	while (m--)
	{
		scanf("%d %d", &l, &r);
		
		for (i = l - 1; i < r; i++)
		{
			printf("%s\n", files[i]);
		}
	}
	
	return 0;
}