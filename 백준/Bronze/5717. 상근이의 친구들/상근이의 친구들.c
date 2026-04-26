#include <stdio.h>

int main(void)
{
	int m, f;
	
	while (1)
	{
		scanf("%d %d", &m, &f);
		
		if (m == 0 && f == 0)
		{
			break;
		}
		
		printf("%d\n", m + f);
	}
	
	return 0;
}