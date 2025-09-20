#include <stdio.h>

int main(void)
{
	int n;
	int c;
	int p;
	
	scanf("%d", &n);
	scanf("%d", &c);
	scanf("%d", &p);
	printf("%s", n <= c * p ? "yes" : "no");
	
	return 0;
}