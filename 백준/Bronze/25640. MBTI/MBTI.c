#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char mbti[5];
	int n;
	char x[5];
	int count = 0;
	
	scanf("%s", mbti);
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", x);
		
		if (strcmp(mbti, x) == 0)
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}