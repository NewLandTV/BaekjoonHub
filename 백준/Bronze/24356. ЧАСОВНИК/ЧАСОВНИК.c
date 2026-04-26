#include <stdio.h>

int main(void)
{
	int t1, t2, m1, m2;
	int s, e;
	int x;
	
	scanf("%d %d %d %d", &t1, &m1, &t2, &m2);
	
	s = (t1 * 60 + m1);
	e = (t2 * 60 + m2);
	
	if (s > e)
	{
		e += 1440;
	}
	
	x = e - s;
	
	printf("%d %d", x, x / 30);
	
	return 0;
}