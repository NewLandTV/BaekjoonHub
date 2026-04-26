#include <stdio.h>

int main(void)
{
	int n;
	int w;
	int sum = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &w);
		
		sum += w;
	}
	
	printf("%s", sum % 3 == 0 ? "yes" : "no");
	
	return 0;
}