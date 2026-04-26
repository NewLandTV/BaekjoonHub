#include <stdio.h>

int main(void)
{
	int i;
	int j;
	char s[100] = { 0 };
	
	scanf("%s", s);
	
	for (i = 97; i < 123; i++)
	{
		j = 0;
		
		while (s[j] != 0)
		{
			if (s[j] == (char)i)
			{
				break;
			}
			
			j++;
		}
		
		printf("%d ", s[j] == (char)i ? j : -1);
	}
	
	return 0;
}