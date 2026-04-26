#include <stdio.h>

int main(void)
{
	int i, j;
	int temp;
	int x[3];
	int a, b, c;
	char s[4];
	
	scanf("%d %d %d", &x[0], &x[1], &x[2]);
	scanf("%s", s);
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2 - i; j++)
		{
			if (x[j] > x[j + 1])
			{
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
	
	a = x[s[0] - 65];
	b = x[s[1] - 65];
	c = x[s[2] - 65];
	
	printf("%d %d %d", a, b, c);
		
	return 0;
}