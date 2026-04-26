#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char str[21];
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%s", str);
		printf("%s\n", strlen(str) >= 6 && strlen(str) <= 9 ? "yes" : "no");
	}
	
	return 0;
}