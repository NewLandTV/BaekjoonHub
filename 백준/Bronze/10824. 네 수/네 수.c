#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char a[15], b[8], c[15], d[8];
	long long n1, n2;
	
	scanf("%s %s %s %s", a, b, c, d);
	strcat(a, b);
	strcat(c, d);
	
	n1 = atoll(a);
	n2 = atoll(c);
	
	printf("%lld", n1 + n2);
	
	return 0;
}