#include <stdio.h>

int n, m;
int numbers[8];

void DFS(int depth);

int main(void)
{
	scanf("%d %d", &n, &m);
	DFS(0);
	
	return 0;
}

void DFS(int depth)
{
	int i;
	int offset = 1;
	
	if (depth == m)
	{
		for (i = 0; i < m; i++)
		{
			printf("%d ", numbers[i]);
		}
		
		printf("\n");
		
		return;
	}
	
	if (depth > 0)
	{
		offset = numbers[depth - 1];
	}
	
	for (i = offset; i <= n; i++)
	{
		numbers[depth] = i;
		
		DFS(depth + 1);
	}
}