#include <stdio.h>
#include <math.h>

#define Max(a, b) (a > b ? a : b)

int main(void)
{
	int l;
	int a;
	int b;
	int c;
	int d;
	float rac;
	float rbd;
	int w;
	
	scanf("%d", &l);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	rac = (float)a / c;
	rbd = (float)b / d;
	w = ceil(Max(rac, rbd));
	
	printf("%d", l - w);
	
	return 0;
}