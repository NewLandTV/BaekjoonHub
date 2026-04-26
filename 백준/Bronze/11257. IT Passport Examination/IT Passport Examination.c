#include <stdio.h>

int main(void)
{
	int n;
	int number, strategy, management, technology;
	int sum, pass;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%d %d %d %d", &number, &strategy, &management, &technology);
		
		sum = strategy + management + technology;
		pass = sum >= 55 && strategy >= 11 && management >= 8 && technology >= 12;
		
		printf("%d %d %s\n", number, sum, pass ? "PASS" : "FAIL");
	}
	
	return 0;
}