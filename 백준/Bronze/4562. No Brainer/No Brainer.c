#include <stdio.h>

int main(void)
{
	int n;
	int x, y;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%d %d", &x, &y);
		puts(x >= y ? "MMM BRAINS" : "NO BRAINS");
	}
	
	return 0;
}