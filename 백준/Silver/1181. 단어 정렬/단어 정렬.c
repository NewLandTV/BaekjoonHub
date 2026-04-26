#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int n;
	char words[20000][51];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; scanf("%s", words[i++]));
	
	qsort(words, n, 51, Compare);
	printf("%s\n", words[0]);
	
	for (i = 1; i < n; i++)
	{
		if (strcmp(words[i], words[i - 1]))
		{
			printf("%s\n", words[i]);
		}
	}
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	char* word1 = (char**)a;
	char* word2 = (char**)b;
	
	if (strlen(word1) > strlen(word2))
	{
		return 1;
	}
	
	if (strlen(word1) < strlen(word2))
	{
		return -1;
	}
	
	return strcmp(word1, word2);
}