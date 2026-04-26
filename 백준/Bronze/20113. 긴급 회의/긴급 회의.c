#include <stdio.h>

int main(void)
{
	int n;
	int x, c[100] = { 0, };
	int maxVote = 0, k = 0, numVote = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &x);
		
		if (x-- == 0)
		{
			continue;
		}
		
		if (++c[x] >= maxVote)
		{
			numVote = maxVote;
			
			if (c[x] > maxVote)
			{
				maxVote = c[x];
				k = x + 1;
			}
		}
	}
	
	printf(numVote == maxVote ? "skipped" : "%d", k);
	
	return 0;
}