#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char s[11];
	
	scanf("%d", &n);
	scanf("%s", s);
	
	for (i = 0; i < strlen(s) - 3; i++)
	{
		if (s[i] == 'g' && s[i + 1] == 'o' && s[i + 2] == 'r' && s[i + 3] == 'i')
		{
			printf("YES");
			
			return 0;
		}
	}
	
	printf("NO");
	
	return 0;
}