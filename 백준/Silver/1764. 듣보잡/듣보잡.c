#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Person
{
	char name[21];
} Person;

Person list[1000000], answer[500000];

int Compare(const void* a, const void* b) { return strcmp(a, b); }

int main(void)
{
	int i;
	int n, m;
	int count = 0;
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n + m; i++)
	{
		scanf(" %s", list[i].name);
	}
	
	qsort(list, n + m, sizeof(list[0]), Compare);
	
	for (i = 0; i < n + m; i++)
	{
		if (strcmp(list[i].name, list[i + 1].name) == 0)
		{
			strcpy(answer[count++].name, list[i++].name);
		}
	}
	
	printf("%d\n", count);
	
	for (i = 0; i < count; i++)
	{
		printf("%s\n", answer[i].name);
	}
	
	return 0;
}