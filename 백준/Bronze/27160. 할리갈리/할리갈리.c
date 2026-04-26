#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char s[11];
	int x;
	int a[4] = { 0, };
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%s %d", s, &x);
		
		if (s[0] == 'S')
		{
			a[0] += x;
		}
		else if (s[0] == 'B')
		{
			a[1] += x;
		}
		else if (s[0] == 'L')
		{
			a[2] += x;
		}
		else if (s[0] == 'P')
		{
			a[3] += x;
		}
	}
	
	for (i = 0; i < 4; i++)
	{
		if (a[i] == 5)
		{
			printf("YES");
			
			return 0;
		}
	}
	
	printf("NO");
	
	return 0;
}