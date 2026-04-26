#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
	int h1, m1, s1;
	int h2, m2, s2;
	char c;
	int t1, t2;
	
	scanf("%d %c %d %c %d", &h1, &c, &m1, &c, &s1);
	scanf("%d %c %d %c %d", &h2, &c, &m2, &c, &s2);
	
	t1 = h1 * 3600 + m1 * 60 + s1;
	t2 = h2 * 3600 + m2 * 60 + s2;
	
	if (t1 > t2)
	{
		t2 += 86400;
	}
	
	printf("%d", Abs(t2 - t1));
	
	return 0;
}