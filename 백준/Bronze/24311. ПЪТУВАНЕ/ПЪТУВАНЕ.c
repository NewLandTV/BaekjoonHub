#include <stdio.h>

int main(void)
{
	int t1, t2;
	int t3;
	int t4, t5;
	int br;
	int t6;
	int t, h, m;
	
	scanf("%d %d", &t1, &t2);
	scanf("%d", &t3);
	scanf("%d %d", &t4, &t5);
	scanf("%d", &br);
	scanf("%d", &t6);
	
	t = t1 * 60 + t2 - 10;
	t -= t3;
	t -= t4 * 60 + t5;
	t -= (br + 1) * t6;
	
	h = t / 60;
	m = t % 60;
	
	printf("%02d %02d", h, m);
	
	return 0;
}