#include <stdio.h>

#define MAX_LENGTH 1000

int main(void)
{
	int i, j;
	int a, b;
	int s[MAX_LENGTH];
	int c = 0;
	int sum = 0;
	
	scanf("%d %d", &a, &b);
	
	for (i = 0; c < MAX_LENGTH; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (c >= MAX_LENGTH)
			{
				break;
			}
			
			s[c++] = i + 1;
		}
	}
	
	for (i = a - 1; i < b; i++)
	{
		sum += s[i];
	}
	
	printf("%d", sum);
	
	return 0;
}