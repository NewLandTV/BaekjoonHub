#include <stdio.h>

int main(void)
{
	int i;
	int p;
	int l;
	int x;
	
	scanf("%d", &p);
	
	for (; p > 0; p--)
	{
		scanf("%d", &l);
		
		for (x = 0, i = 1; i <= l; i++)
		{
			x += i * i;
		}
		
		printf("%d\n", x);
	}
	
	return 0;
}