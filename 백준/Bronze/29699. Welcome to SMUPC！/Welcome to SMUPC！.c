#include <stdio.h>

int main(void)
{
	int n;
	char* label = "WelcomeToSMUPC";
	
	scanf("%d", &n);
	printf("%c", label[(n - 1) % 14]);
	
	return 0;
}