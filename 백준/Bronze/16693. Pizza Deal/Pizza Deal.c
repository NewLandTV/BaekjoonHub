#include <stdio.h>

#define PI 3.1415926535897

int main(void)
{
	int a1, p1;
	int r1, p2;
	double whole, slice;
	
	scanf("%d %d", &a1, &p1);
	scanf("%d %d", &r1, &p2);
	
	whole = PI * r1 * r1 * p1;
	slice = a1 * p2;
	
	printf("%s", whole > slice ? "Whole pizza" : "Slice of pizza");
	
	return 0;
}