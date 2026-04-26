#include <stdio.h>

int main(void)
{
	int s, t, d;
	int f;
	
	scanf("%d %d %d", &s, &t, &d);
	
	f = (d / (s * 2)) * t;
	
	printf("%d", f);
	
	return 0;
}