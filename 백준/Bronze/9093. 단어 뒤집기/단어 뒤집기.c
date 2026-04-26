#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int t;
	char s[1001], *ptr;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf(" %[^\n]s", s);
		
		for (ptr = strtok(s, " "); ptr; ptr = strtok(NULL, " "))
		{
			for (i = strlen(ptr) - 1; i >= 0; i--)
			{
				fputc(ptr[i], stdout);
			}
			
			fputc(' ', stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}