#include <stdio.h>

int main(void)
{
	int n;
	int result;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		for (result = 0; n >= 1; result += n--);
		
		printf("%d\n", result);
	}
	
	return 0;
}