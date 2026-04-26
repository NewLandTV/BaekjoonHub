#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char doc[2501];
	char w[51];
	int docLen;
	int wLen;
	int c = 0;
	int count = 0;
	
	scanf("%[^\n]s", doc);
	scanf(" %[^\n]s", w);
	
	docLen = strlen(doc);
	wLen = strlen(w);
	
	for (i = 0, j = 0; i < docLen;)
	{
		if (doc[i++] != w[j++])
		{
			j = 0;
			c++;
			i = c;
		}
		else if (j == wLen)
		{
			j = 0;
			count++;
			c = i;
		}
	}
	
	printf("%d", count);
	
	return 0;
}