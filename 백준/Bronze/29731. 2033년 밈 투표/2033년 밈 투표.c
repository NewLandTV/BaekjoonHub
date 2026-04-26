#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char s[51];
	
	for (scanf("%d", &n), getchar(); n > 0; n--)
	{
		scanf("%[^\n]s", s);
		getchar();
		
		if (strcmp(s, "Never gonna give you up") != 0 &&
			strcmp(s, "Never gonna let you down") != 0 &&
			strcmp(s, "Never gonna run around and desert you") != 0 &&
			strcmp(s, "Never gonna make you cry") != 0 &&
			strcmp(s, "Never gonna say goodbye") != 0 &&
			strcmp(s, "Never gonna tell a lie and hurt you") != 0 &&
			strcmp(s, "Never gonna stop") != 0)
		{
			printf("Yes");
			
			return 0;
		}
	}
	
	printf("No");
	
	return 0;
}