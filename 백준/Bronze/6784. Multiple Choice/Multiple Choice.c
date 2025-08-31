#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char check[10001], answer;
	int c = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf(" %c", &check[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		scanf(" %c", &answer);
		
		if (check[i] == answer || answer == '_')
		{
			c++;
		}
	}
	
	printf("%d", c);
	
	return 0;
}