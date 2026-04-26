#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int n;
	char name[10001][21];
	int r, s, d;
	int p;
	int top = 0, next = 0;
	int topIndex = 0, nextIndex = 0;
	
	scanf("%d", &n);
	
	if (n == 0)
	{
		return 0;
	}
	
	if (n == 1)
	{
		scanf("%s", name[0]);
		printf("%s", name[0]);
		
		return 0;
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", name[i], &r, &s, &d);
		
		p = r * 2 + s * 3 + d;
		
		if (top < p)
		{
			if (next <= top)
			{
				next = top;
				nextIndex = topIndex;
			}
			
			top = p;
			topIndex = i;
		}
		else if (next < p)
		{
			next = p;
			nextIndex = i;
		}
	}
	
	if (top != next)
	{
		printf("%s\n", name[topIndex]);
		printf("%s", name[nextIndex]);
		
		return 0;
	}
	
	if (strcmp(name[topIndex], name[nextIndex]) < 0)
	{
		printf("%s\n", name[topIndex]);
		printf("%s", name[nextIndex]);
		
		return 0;
	}
	
	printf("%s\n", name[nextIndex]);
	printf("%s", name[topIndex]);
	
	return 0;
}