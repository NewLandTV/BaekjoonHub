#include <stdio.h>

int main(void)
{
	int n;
	int i, f;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &i, &f);
		printf("%s\n", (i <= 1 && f <= 2) || (i <= 2 && f <= 1) ? "Yes" : "No");
	}
	
	return 0;
}