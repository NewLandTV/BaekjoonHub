#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char k[11];
	int flag = 0;
	int n = 0;
	
	scanf("%s", k);
	
	for (i = strlen(k) - 1; i >= 0; i--)
	{
		if (k[i] == '0')
		{
			if (flag == 1)
			{
				n++;
			}
		}
		else
		{
			flag = 1;
		}
	}
	
	printf("%d", n);
	
	return 0;
}