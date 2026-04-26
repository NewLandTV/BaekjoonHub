#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i, j;
	int k;
	char* s;
	int max = 0;
	char l, r;
	
	scanf("%d", &k);
	
	s = (char*)malloc(k + 1);
	
	scanf("%s", s);
	
	for (i = 1; i < k; i++)
	{
		if (s[i] != s[i - 1])
		{
			l = (r = s[i]) == 'N' ? 'S' : 'N';
			
			for (j = 0; i + j < k && i - j - 1 >= 0 && s[i + j] == r && s[i - j - 1] == l; j++);
			
			max = Max(j * 2, max);
		}
	}
	
	free(s);
	printf("%d", max);
	
	return 0;
}