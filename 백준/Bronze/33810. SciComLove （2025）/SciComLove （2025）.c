#include <stdio.h>

int main(void)
{
	int i;
	char s[11];
	char* origin = "SciComLove";
	int diff = 0;
	
	scanf("%s", s);
	
	for (i = 0; i < 10; i++)
	{
		if (s[i] != origin[i])
		{
			diff++;
		}
	}
	
	printf("%d", diff);
	
	return 0;
}