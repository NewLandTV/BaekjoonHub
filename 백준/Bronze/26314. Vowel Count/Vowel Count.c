#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int n;
	char name[21];
	int c;
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%s", name);
		printf("%s\n", name);
		
		for (i = 0, c = 0; i < strlen(name); i++)
		{
			if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
			{
				c++;
			}
		}
		
		printf("%d\n", strlen(name) - c < c);
	}
	
	return 0;
}