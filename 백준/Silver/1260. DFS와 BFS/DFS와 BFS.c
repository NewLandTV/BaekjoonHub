#include <stdio.h>
#include <memory.h>

#define MAX 1001

int n, m, v;
int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];

void DFS(int v);
void BFS();

int main(void)
{
	int n1, n2;
	
	scanf("%d %d %d", &n, &m, &v);
	
	while (m--)
	{
		scanf("%d %d", &n1, &n2);
		
		graph[n1][n2] = graph[n2][n1] = 1;
	}
	
	DFS(v);
	printf("\n");
	memset(visited, 0, sizeof(int) * (n + 1));
	BFS();
	
	return 0;
}

void DFS(int v)
{
	int i;
	
	visited[v] = 1;
	
	printf("%d ", v);
	
	for (i = 1; i <= n; i++)
	{
		if (!visited[i] && graph[v][i])
		{
			DFS(i);
		}
	}
}

void BFS()
{
	int i;
	int front = -1, rear = -1;
	int pop;
	
	visited[v] = 1;
	queue[++rear] = v;
	
	printf("%d ", v);
	
	while (front < rear)
	{
		pop = queue[++front];
		
		for (i = 1; i <= n; i++)
		{
			if (!visited[i] && graph[pop][i])
			{
				visited[i] = 1;
				queue[++rear] = i;
				
				printf("%d ", i);
			}
		}
	}
}