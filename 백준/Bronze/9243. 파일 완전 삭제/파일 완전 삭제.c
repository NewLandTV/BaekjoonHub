#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int n;
	char a[1001];
	char b[1001];
	
	scanf("%d", &n);
	scanf("%s", a);
	scanf("%s", b);
	
	if (n & 1)
	{
		for (i = 0; i < strlen(a); i++)
		{
			if (a[i] == b[i])
			{
				printf("Deletion failed");
				
				return 0;
			}
		}
		
		printf("Deletion succeeded");
		
		return 0;
	}
	
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] != b[i])
		{
			printf("Deletion failed");
			
			return 0;
		}
	}
	
	printf("Deletion succeeded");
	
	return 0;
}