#include <stdio.h>

int main(void)
{
	int t, f, s, p, c;
	int temp;
	
	scanf("%d %d %d %d %d", &t, &f, &s, &p, &c);
	
	temp = t * 6 + f * 3 + s * 2 + p + c * 2;
	
	scanf("%d %d %d %d %d", &t, &f, &s, &p, &c);
	printf("%d %d", temp, t * 6 + f * 3 + s * 2 + p + c * 2);
	
	return 0;
}