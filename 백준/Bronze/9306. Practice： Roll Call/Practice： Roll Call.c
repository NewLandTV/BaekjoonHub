#include <stdio.h>

int main(void)
{
	int t, x;
	char l[21], f[21];
	
	scanf("%d", &t);
	
	for (x = 1; x <= t; x++)
	{
		scanf("%s", f);
		scanf("%s", l);
		printf("Case %d: %s, %s\n", x, l, f);
	}
	
	return 0;
}