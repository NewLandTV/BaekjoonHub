#include <stdio.h>

int main(void)
{
	int x, y, z;
	int u, v, w;
	
	scanf("%d %d %d", &x, &y, &z);
	scanf("%d %d %d", &u, &v, &w);
	
	printf("%d", x * (u / 100) + y * (v / 50) + z * (w / 20));
	
	return 0;
}