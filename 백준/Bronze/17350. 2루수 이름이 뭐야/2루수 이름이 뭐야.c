#include <stdio.h>

int main(void)
{
	int n;
	char name[100];
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", name);
		
		if (name[0] == 'a' && name[1] == 'n' && name[2] == 'j' && name[3] == 0)
		{
			printf("뭐야;");
			
			return 0;
		}
	}
	
	printf("뭐야?");
	
	return 0;
}