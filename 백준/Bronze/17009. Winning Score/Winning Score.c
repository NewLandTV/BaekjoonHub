#include <stdio.h>

int main(void)
{
	int a, b;
	int a1, a2, a3;
	int b1, b2, b3;
	
	scanf("%d", &a1);
	scanf("%d", &a2);
	scanf("%d", &a3);
	scanf("%d", &b1);
	scanf("%d", &b2);
	scanf("%d", &b3);
	
	a = a1 * 3 + a2 * 2 + a3;
	b = b1 * 3 + b2 * 2 + b3;
	
	if (a == b)
	{
		printf("T");
		
		return 0;
	}
	
	printf("%c", a < b ? 'B' : 'A');
	
	return 0;
}