#include <stdio.h>

int main(void)
{
	int t;
	int n;
	
	for (scanf("%d", &t); t > 0; t--)
	{
		scanf("%d", &n);
		printf("%s\n", (n + 1) % (n % 100) == 0 ? "Good" : "Bye");
	}
	
	return 0;
}