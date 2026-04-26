#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

int n, m;
int graph[1000][1000];
int visit[1000];

void DFS(int v)
{
	int i, j;
	
	visit[v - 1] = 1;
	
	for (i = 1; i <= n; i++)
	{
		if (graph[v - 1][i - 1] && !visit[i - 1])
		{
			DFS(i);
		}
	}
}

int main(void)
{
	int i;
	int u, v;
	int x = 0;
	
	scanf("%d %d", &n, &m);
	
	while (m--)
	{
		scanf("%d %d", &u, &v);
		
		graph[u - 1][v - 1] = graph[v - 1][u - 1] = 1;
	}
	
	for (i = 1; i <= n; i++)
	{
		if (!visit[i - 1])
		{
			DFS(i);
			
			x++;
		}
	}
	
	printf("%d", x);
	
	return 0;
}