#include <stdio.h>

int main(void)
{
	int i, j;
	char n[8];
	int len;
	int c = 0;
	int s[10];
	int num;
	
	scanf("%s", n);
	
	for (len = 0; n[len]; len++);
	
	if (len == 1)
	{
		printf("1");
		
		return 0;
	}
	
	for (i = 1; i < len; i++)
	{
		if (n[0] != n[i])
		{
			c = 1;
			
			break;
		}
	}
	
	if (c == 0)
	{
		if (len & 1)
		{
			len++;
		}
		
		printf("%d", n[0] == '6' || n[0] == '9' ? len >> 1 : len);
		
		return 0;
	}
	
	for (i = 0; i < 10; i++)
	{
		s[i] = 1;
		
		if (n[0] - '0' == i)
		{
			s[i]--;
		}
	}
	
	for (i = 1; i < len; i++)
	{
		num = n[i] - '0';
		
		if (num == 6 || num == 9)
		{
			if (s[6] > 0)
			{
				s[6]--;
				
				continue;
			}
			else if (s[9] > 0)
			{
				s[9]--;
				
				continue;
			}
			
			c++;
			s[num]--;
			
			for (j = 0; j < 10; j++)
			{
				s[j]++;
			}
			
			continue;
		}
		
		if (s[num] > 0)
		{
			s[num]--;
			
			continue;
		}
		
		c++;
		s[num]--;
		
		for (j = 0; j < 10; j++)
		{
			s[j]++;
		}
	}
	
	printf("%d", c);
	
	return 0;
}