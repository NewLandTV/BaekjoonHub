#include <stdio.h>

int main(void)
{
	int i;
	int t;
	char s[1001];
	int result;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf(" %[^\n]s", s);
		
		result = 0;
		
		for (i = 0; s[i]; i++)
		{
			switch (s[i])
			{
			case 'I':
				result++;
				
				break;
			case 'V':
				result += 5;
				
				break;
			case 'X':
				result += 10;
				
				break;
			case 'L':
				result += 50;
				
				break;
			case 'C':
				result += 100;
				
				break;
			case 'D':
				result += 500;
				
				break;
			case 'M':
				result += 1000;
				
				break;
			}
		}
		
		printf("%d\n", result);
	}
	
	return 0;
}