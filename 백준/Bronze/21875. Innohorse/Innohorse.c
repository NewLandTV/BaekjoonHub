#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
	char a[3], b[3];
	int x, y;
	
	scanf("%s", a);
	scanf("%s", b);
	
	x = Abs(a[0] - b[0]);
	y = Abs(a[1] - b[1]);
	
	if (x > y)
	{
		printf("%d %d", y, x);
	}
	else
	{
		printf("%d %d", x, y);
	}
	
	return 0;
}