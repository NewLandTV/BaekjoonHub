#include <stdio.h>

int main(void)
{
	int i;
	int n0, n1, n2, n3, n4;
	
	for (i = 1; ; i++)
	{
		scanf("%d", &n0);
		
		if (n0 == 0)
		{
			break;
		}
		
		n1 = n0 * 3;
		n2 = n1 >> 1;
		n3 = n2 * 3;
		n4 = n3 / 9;
		
		printf("%d. %s %d\n", i, n1 & 1 ? "odd" : "even", n4);
	}
	
	return 0;
}