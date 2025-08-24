#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char n[5];
	int margin;
	
	while (1)
	{
		scanf("%s", &n);
		
		if (n[0] == '0')
		{
			break;
		}
		
		margin = 1;
		
		for (i = 0; i < strlen(n); i++)
		{
			if (n[i] == '0')
			{
				margin += 5;
			}
			else if (n[i] == '1')
			{
				margin += 3;
			}
			else
			{
				margin += 4;
			}
		}
		
		printf("%d\n", margin);
	}
	
	return 0;
}