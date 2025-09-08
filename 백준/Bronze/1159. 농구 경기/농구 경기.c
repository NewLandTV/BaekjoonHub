#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char lastName[31];
	int c[26] = { 0, }, predaja = 1;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf(" %s", lastName);
		
		c[(int)lastName[0] - 'a']++;
	}
	
	for (i = 0; i < 26; i++)
	{
		if (c[i] >= 5)
		{
			predaja = 0;
			
			printf("%c", 'a' + i);
		}
	}
	
	if (predaja == 1)
	{
		printf("PREDAJA");
	}
	
	return 0;
}