#include <stdio.h>

int main(void)
{
	int i, j;
	int a, b, c;
	int cnt = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	for (i = a; i <= a + c; i++)
	{
		for (j = b; j <= b + c; j++)
		{
			if (i <= j || a + b + c < i + j)
			{
				break;
			}
			
			cnt++;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}