#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int n;
	char a[1001], b[1001];
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf(" %s %s", a, b);
		qsort(a, strlen(a), sizeof(char), Compare);
		qsort(b, strlen(b), sizeof(char), Compare);
		printf("%s\n", strcmp(a, b) == 0 ? "Possible" : "Impossible");
	}
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	char c1 = *(char*)a;
	char c2 = *(char*)b;
	
	if (c1 == c2)
	{
		return 0;
	}
	
	return c1 > c2 ? 1 : -1;
}