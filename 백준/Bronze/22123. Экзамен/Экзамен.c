#include <stdio.h>

int TimeToSecond(char* t);

int main(void)
{
	int n;
	char s[9], f[9];
	int a, b;
	int k;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s %s %d", s, f, &k);
		
		a = TimeToSecond(s);
		b = TimeToSecond(f);
		
		if (b <= a)
		{
			b += 86400;
		}
		
		if (a + k * 60 <= b)
		{
			printf("Perfect\n");
		}
		else if (a + k * 60 <= b + 3600)
		{
			printf("Test\n");
		}
		else
		{
			printf("Fail\n");
		}
	}
	
	return 0;
}

int TimeToSecond(char* t)
{
	int h = ((t[0] - '0') * 10 + t[1] - '0') * 3600;
	int m = ((t[3] - '0') * 10 + t[4] - '0') * 60;
	int s = (t[6] - '0') * 10 + t[7] - '0';
	
	return h + m + s;
}