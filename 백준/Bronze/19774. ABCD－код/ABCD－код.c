#include <stdio.h>
#include <math.h>

int main(void)
{
	int t;
	int v;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &v);
		printf("%s\n", (int)(pow(v / 100, 2) + pow(v % 100, 2)) % 7 == 1 ? "YES" : "NO");
	}
	
	return 0;
}