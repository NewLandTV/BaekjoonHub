#include <stdio.h>

int main(void)
{
	char t1[6], t2[6];
	int h1, m1, h2, m2;
	int x, y;
	
	scanf("%s %s", t1, t2);
	
	h1 = (t1[0] - '0') * 10 + t1[1] - '0';
	m1 = (t1[3] - '0') * 10 + t1[4] - '0';
	h2 = (t2[0] - '0') * 10 + t2[1] - '0';
	m2 = (t2[3] - '0') * 10 + t2[4] - '0';
	x = h1 * 3600 + m1 * 60;
	y = h2 * 3600 + m2 * 60;
	
	printf("%s", x < y ? "YES" : "NO");
	
	return 0;
}