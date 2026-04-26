#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char k[61];
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", k);
		
		printf("%s\n", k[strlen(k) - 1] & 1 ? "odd" : "even");
	}
	
	return 0;
}