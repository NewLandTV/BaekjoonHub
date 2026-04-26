#include <stdio.h>
#include <string.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i, j;
	int n;
	char words[1000][46];
	int maxLen = 0, t, sum;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", words[i]);
		
		maxLen = Max(maxLen, strlen(words[i]));
	}
	
	for (i = 0; i < maxLen; i++)
	{
		for (j = t = sum = 0; j < n; j++)
		{
			if (words[j][i] == 0)
			{
				continue;
			}
			
			t++;
			sum += words[j][i];
		}
		
		sum /= t;
		
		printf("%c", sum);
	}
	
	return 0;
}