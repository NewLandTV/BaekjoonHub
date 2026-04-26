#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char name[101];
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", name);
		
		for (i = 0; name[i]; i++)
		{
			if (name[i] == 'S')
			{
				printf("%s", name);
				
				return 0;
			}
		}
	}
	
	return 0;
}