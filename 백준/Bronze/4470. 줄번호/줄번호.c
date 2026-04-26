#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char str[51];
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		getchar();
		scanf("%[^\n]s", str);
		printf("%d. %s\n", i, str);
	}
	
	return 0;
}