#include <stdio.h>

int main(void)
{
	int a1, b1, c1, d1, e1, f1;
	int a2, b2, c2, d2, e2, f2;
	float cocjr0208, ekwoo;
	
	scanf("%d %d %d %d %d %d", &a1, &b1, &c1, &d1, &e1, &f1);
	scanf("%d %d %d %d %d %d", &a2, &b2, &c2, &d2, &e2, &f2);
	
	cocjr0208 = a1 * 13 + b1 * 7 + c1 * 5 + d1 * 3 + e1 * 3 + f1 * 2;
	ekwoo = a2 * 13 + b2 * 7 + c2 * 5 + d2 * 3 + e2 * 3 + f2 * 2 + 1.5f;
	
	printf("%s", cocjr0208 < ekwoo ? "ekwoo" : "cocjr0208");
	
	return 0;
}