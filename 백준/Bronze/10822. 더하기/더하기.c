#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[101], *ptr;
	int sum;
	
	scanf("%s", s);
	
	for (sum = atoi(strtok(s, ",")); ptr = strtok(NULL, ","); sum += atoi(ptr));
	
	printf("%d", sum);
	
	return 0;
}