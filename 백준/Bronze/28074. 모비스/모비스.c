#include <stdio.h>
#include <string.h>

int main(void)
{
	int x;
	char str[101];
	int m = 0;
	int o = 0;
	int b = 0;
	int i = 0;
	int s = 0;
	
	scanf("%s", str);
	
	for (x = 0; x < strlen(str); x++)
	{
		if (str[x] == 'M')
		{
			m = 1;
		}
		else if (str[x] == 'O')
		{
			o = 1;
		}
		else if (str[x] == 'B')
		{
			b = 1;
		}
		else if (str[x] == 'I')
		{
			i = 1;
		}
		else if (str[x] == 'S')
		{
			s = 1;
		}
	}
	
	printf("%s", m == 1 && o == 1 && b == 1 && i == 1 && s == 1 ? "YES" : "NO");
	
	return 0;
}