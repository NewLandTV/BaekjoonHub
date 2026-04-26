#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	char n[4];
	char* pattern[7] =
	{
		"123",
		"456",
		"789",
		"147",
		"258",
		"369",
		"058"
	};
	
	scanf("%s", n);
	qsort(n, 3, sizeof(char), Compare);
	
	for (i = 0; i < 7; i++)
	{
		if (strcmp(n, pattern[i]) == 0)
		{
			printf("Unlocked");
			
			return 0;
		}
	}
	
	printf("Locked");
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	char n1 = *(char*)a;
	char n2 = *(char*)b;
	
	return n1 - n2;
}