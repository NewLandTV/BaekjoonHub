#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[256];
	int length;
	int happy = 0, sad = 0;
	
	scanf("%[^\n]s", s);
	
	length = strlen(s);
	
	if (length < 3)
	{
		printf("none");
		
		return 0;
	}
	
	for (i = 0; i < length - 3; i++)
	{
		if (s[i] != ':' || s[i + 1] != '-')
		{
			continue;
		}
		
		if (s[i + 2] == ')')
		{
			happy++;
		}
		else if (s[i + 2] == '(')
		{
			sad++;
		}
	}
	
	if (happy == 0 && sad == 0)
	{
		printf("none");
		
		return 0;
	}
	
	if (happy == sad)
	{
		printf("unsure");
		
		return 0;
	}
	
	printf("%s", happy > sad ? "happy" : "sad");
	
	return 0;
}