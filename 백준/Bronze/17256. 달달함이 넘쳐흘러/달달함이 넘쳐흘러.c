#include <stdio.h>

int main(void)
{
	int ax, ay, az;
	int bx, by, bz;
	int cx, cy, cz;
	
	scanf("%d %d %d", &ax, &ay, &az);
	scanf("%d %d %d", &cx, &cy, &cz);
	
	bx = cx - az;
	by = cy / ay;
	bz = cz - ax;
	
	printf("%d %d %d", bx, by, bz);
	
	return 0;
}