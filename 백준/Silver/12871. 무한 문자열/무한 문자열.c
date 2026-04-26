#include <stdio.h>
#include <string.h>

int LCM(int a, int b)
{
	int i;
	int x = 0;
	
	for (i = a * b; i > 0; i--)
	{
		if (i % a == 0 && i % b == 0)
		{
			x = i;
		}
	}
	
	return x;
}

int main(void)
{
	int i;
	char s[51];
	char t[51];
	int a, b;
	int lcm;
	
	scanf("%s", s);
	scanf("%s", t);
	
	a = strlen(s);
	b = strlen(t);
	lcm = LCM(a, b);
	
	for (i = 0; i < lcm; i++)
	{
		if (s[i % a] != t[i % b])
		{
			printf("0");
			
			return 0;
		}
	}
	
	printf("1");
	
	return 0;
}