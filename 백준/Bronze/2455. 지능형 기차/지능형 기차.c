#include <stdio.h>

int main(void)
{
	int i;
	int out, in;
	int current = 0;
	int max = 0;
	
	for (i = 0; i < 4; i++)
	{
		scanf("%d %d", &out, &in);
		
		current = current - out + in;
		
		if (max < current)
		{
			max = current;
		}
	}
	
	printf("%d", max);
	
	return 0;
}