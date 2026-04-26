#include <stdio.h>

int main(void)
{
	int t1, t2;
	
	scanf("%d %d", &t1, &t2);
	printf("%d", t1 > t2 ? t2 : t1);
	
	return 0;
}