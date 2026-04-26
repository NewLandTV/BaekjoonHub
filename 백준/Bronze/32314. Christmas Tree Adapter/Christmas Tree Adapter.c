#include <stdio.h>

int main(void)
{
	int a;
	int w, v;
	
	scanf("%d", &a);
	scanf("%d %d", &w, &v);
	printf("%d", a * v <= w);
	
	return 0;
}