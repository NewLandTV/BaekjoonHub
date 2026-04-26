#include <stdio.h>
#include <math.h>

int main(void)
{
	int h, w, n, m;
	int number;
	
	scanf("%d %d %d %d", &h, &w, &n, &m);
	
	number = (int)ceil(h / (n + 1.0f)) * (int)ceil(w / (m + 1.0f));
	
	printf("%d", number);
	
	return 0;
}