#include <stdio.h>
#include <string.h> 

int main(void)
{
	int t;
	char a[121], b[121];
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%s %s", &a, &b);
		printf("%s\n", strcmp(a, b) == 0 ? "OK" : "ERROR");
	}
	
	return 0;
}