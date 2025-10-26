#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	int n;
	char name[51];
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		scanf("%s", name);
		printf("String #%d\n", i);
		
		for (j = 0; j < strlen(name); j++)
		{
			if (name[j] == 'Z')
			{
				printf("A");
				
				continue;
			}
			
			printf("%c", name[j] + 1);
		}
		
		printf("\n\n");
	}
	
	return 0;
}