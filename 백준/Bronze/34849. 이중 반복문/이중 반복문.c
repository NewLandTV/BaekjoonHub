#include <stdio.h>

#define LIMIT 10000

int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("%s", n <= LIMIT ? "Accepted" : "Time limit exceeded");
	
	return 0;
}