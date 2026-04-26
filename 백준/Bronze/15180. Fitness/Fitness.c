#include <stdio.h>

int main(void)
{
	int i;
	int s;
	char p[3];
	int a[8] = { 0, };
	int cnt = 0, flag = 0;
	
	scanf("%d", &s);
	printf("%d ", s);
	
	a[s - 1] = 1;
	
	while (1)
	{
		scanf("%s", p);
		
		if (p[0] == '#')
		{
			break;
		}
		
		if (p[0] == 'A')
		{
			s -= p[1] - '0';
			
			if (s < 1)
			{
				s += 8;
			}
		}
		else
		{
			s += p[1] - '0';
			
			if (s > 8)
			{
				s -= 8;
			}
		}
		
		if (a[s - 1])
		{
			flag = 1;
		}
		
		a[s - 1] = 1;
		
		printf("%d ", s);
	}
	
	for (i = 0; i < 8; i++)
	{
		if (a[i])
		{
			cnt++;
		}
	}
	
	if (flag || cnt < 5)
	{
		printf("reject");
	}
	
	return 0;
}