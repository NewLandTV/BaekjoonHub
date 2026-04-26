#include <stdio.h>

int main(void)
{
	int n;
	int a1, p1, r1, p2;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &a1, &p1);
		scanf("%d %d", &r1, &p2);
		printf("%s pizza\n", a1 > r1 * r1 * 3 && p1 < p2 ? "Slice of" : "Whole");
	}
	
	return 0;
}