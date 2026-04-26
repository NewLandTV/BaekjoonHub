#include <stdio.h>

int main(void)
{
	int i;
	int t;
	char a[101], b[101];
	int x;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%s", a);
		scanf("%s", b);
		
		for (i = 0, x = 0; a[i]; i++)
		{
			if (a[i] != b[i])
			{
				x++;
			}
		}
		
		printf("Hamming distance is %d.\n", x);
	}
	
	return 0;
}