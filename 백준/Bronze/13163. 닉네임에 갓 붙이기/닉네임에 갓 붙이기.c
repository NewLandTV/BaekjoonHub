#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char name[101];
	char* ptr;
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf(" %[^\n]s", name);
		strtok(name, " ");
		printf("god");
		
		while ((ptr = strtok(NULL, " ")) != NULL)
		{
			printf("%s", ptr);
		}
		
		printf("\n");
	}
	
	return 0;
}