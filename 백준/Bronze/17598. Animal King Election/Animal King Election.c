#include <stdio.h>

int main(void)
{
	int i;
	char s[6];
	int l = 0, t = 0;
	
	for (i = 0; i < 9; i++)
	{
		scanf("%s", s);
		
		if (s[0] == 'L')
		{
			l++;
		}
		else
		{
			t++;
		}
	}
	
	printf("%s", l > t ? "Lion" : "Tiger");
	
	return 0;
}