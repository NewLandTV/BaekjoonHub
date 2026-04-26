#include <stdio.h>

int White(int n)
{
	int i;
	int flag = 0;
	
	for (i = 1; i < n; i++)
	{
		if (i % 8 == 0)
		{
			continue;
		}
		
		flag = !flag;
	}
	
	return flag;
}

int main(void)
{
	int t;
	char s[3];
	int a, b;
	int x, y;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%s %d", s, &b);
		
		a = (s[0] - 'A') + (s[1] - '1') * 8 + 1;
		
		if (a == b)
		{
			printf("YES\n");
			
			continue;
		}
		
		x = White(a);
		y = White(b);
		
		printf("%s\n", x == y ? "YES" : "NO");
	}
	
	return 0;
}