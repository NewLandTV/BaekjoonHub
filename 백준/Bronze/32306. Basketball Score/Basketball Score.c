#include <stdio.h>

int main(void)
{
	int a1, b1, c1;
	int a2, b2, c2;
	int t1, t2;
	
	scanf("%d %d %d", &a1, &b1, &c1);
	scanf("%d %d %d", &a2, &b2, &c2);
	
	t1 = a1 + b1 * 2 + c1 * 3;
	t2 = a2 + b2 * 2 + c2 * 3;
	
	if (t1 == t2)
	{
		printf("0");
		
		return 0;
	}
	
	printf("%d", t1 > t2 ? 1 : 2);
	
	return 0;
}