#include <stdio.h>

int main(void)
{
	int n;
	int d;
	char dish[21];
	
	scanf("%d", &n);
	scanf("%d", &d);
	printf("%d\n", d);
	
	while (d--)
	{
		scanf("%s", dish);
		printf("%s\n", dish);
	}
	
	return 0;
}