#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char n[10];
	
	scanf("%s", n);
	
	if (strlen(n) == 1)
	{
		printf("%s", n);
		
		return 0;
	}
	
	for (i = strlen(n) - 1; i > 0; i--)
	{
		if (n[i] >= '5')
		{
			n[i - 1]++;
		}
		
		n[i] = '0';
	}
	
	if (n[0] > '9')
	{
		n[0] = '0';
		
		printf("1");
	}
	
	printf("%s", n);
	
	return 0;
}