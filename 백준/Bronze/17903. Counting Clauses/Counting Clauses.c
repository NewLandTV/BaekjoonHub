#include <stdio.h>

int main(void)
{
	int m, n;
	
	scanf("%d %d", &m, &n);
	printf("%s", m >= 8 ? "satisfactory" : "unsatisfactory");
	
	return 0;
}