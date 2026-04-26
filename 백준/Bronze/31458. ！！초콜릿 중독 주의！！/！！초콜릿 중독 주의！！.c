#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int t;
	char s[62], *ptr;
	int a, n, b;
	int f;
	int value;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%s", s);
		
		a = 0;
		b = 0;
		f = 0;
		
		for (i = 0; i < strlen(s); i++)
		{
			if (s[i] == '0' || s[i] == '1')
			{
				n = s[i] - '0';
				f = 1;
			}
			
			if (s[i] == '!')
			{
				f == 0 ? a++ : b++;
			}
		}
		
		value = 1;
		
		if (n == 0 && b == 0)
		{
			value = 0;
		}
		
		printf("%d\n", !(a & 1) ? value : !value);
	}
	
	return 0;
}