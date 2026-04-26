#include <stdio.h>

#define Min(a, b) (a < b ? a : b)

int main(void)
{
	int n, w, h, l;
	
	scanf("%d %d %d %d", &n, &w, &h, &l);
	printf("%d", Min(n, (w / l) * (h / l)));
	
	return 0;
}