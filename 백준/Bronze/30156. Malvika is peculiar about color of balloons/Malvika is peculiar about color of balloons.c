#include <stdio.h>
#include <string.h>

#define Min(a, b) (a < b ? a : b)

int main(void)
{
	int i;
	int t;
	char s[101];
	int a, b;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%s", s);
		
		for (i = a = b = 0; i < strlen(s); i++)
		{
			if (s[i] == 'a')
			{
				a++;
			}
			else
			{
				b++;
			}
		}
		
		printf("%d\n", Min(a, b));
	}
	
	return 0;
}