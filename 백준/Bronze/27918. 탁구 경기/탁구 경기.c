#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
	int n;
	char c;
	int x = 0, y = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf(" %c", &c);
		
		if (c == 'D')
		{
			x++;
		}
		else if (c == 'P')
		{
			y++;
		}
		
		if (Abs(x - y) == 2)
		{
			break;
		}
	}
	
	printf("%d:%d", x, y);
	
	return 0;
}