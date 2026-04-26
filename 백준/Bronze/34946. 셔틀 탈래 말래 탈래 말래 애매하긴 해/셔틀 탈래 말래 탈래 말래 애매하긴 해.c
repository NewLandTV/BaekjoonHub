#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int s, w;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	s = a + b;
	w = c;
	
	if (s <= d && w <= d)
	{
		printf("~.~");
	}
	else if (s > d && w > d)
	{
		printf("T.T");
	}
	else if (s <= d)
	{
		printf("Shuttle");
	}
	else
	{
		printf("Walk");
	}
	
	return 0;
}