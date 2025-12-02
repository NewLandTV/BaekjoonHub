#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char s[51];
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", s);
		
		if (strcmp(s, "yonsei") == 0)
		{
			printf("Yonsei Won!");
			
			break;
		}
		else if (strcmp(s, "korea") == 0)
		{
			printf("Yonsei Lost...");
			
			break;
		}
	}
	
	return 0;
}