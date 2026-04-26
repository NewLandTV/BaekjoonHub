#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[101];
	char result[100] = { 0, };
	char* ptr;
	
	scanf("%[^\n]s", s);
	
	ptr = strtok(s, " ");
	
	for (i = 0; ptr != NULL; ptr = strtok(NULL, " "))
	{
		if (i != 0 &&
			(strcmp(ptr, "i") == 0 ||
			strcmp(ptr, "pa") == 0 ||
			strcmp(ptr, "te") == 0 ||
			strcmp(ptr, "ni") == 0 ||
			strcmp(ptr, "niti") == 0 ||
			strcmp(ptr, "a") == 0 ||
			strcmp(ptr, "ali") == 0 ||
			strcmp(ptr, "nego") == 0 ||
			strcmp(ptr, "no") == 0 ||
			strcmp(ptr, "ili") == 0))
		{
			continue;
		}
		
		result[i++] =  ptr[0] - ' ';
	}
	
	printf("%s", result);
	
	return 0;
}