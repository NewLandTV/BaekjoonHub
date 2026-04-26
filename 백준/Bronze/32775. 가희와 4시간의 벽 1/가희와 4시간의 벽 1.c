#include <stdio.h>

int main(void)
{
	int sab;
	int fab;
	
	scanf("%d", &sab);
	scanf("%d", &fab);
	
	printf("%s", sab <= fab ? "high speed rail" : "flight");
	
	return 0;
}