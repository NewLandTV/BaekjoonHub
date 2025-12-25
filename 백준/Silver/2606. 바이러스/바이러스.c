#include <stdio.h>

int n;
int pc[100][100];
int visited[100];
int virus;

void CheckConnection(int v);

int main(void)
{
	int i;
	int c;
	int a, b;
	
	scanf("%d", &n);
	scanf("%d", &c);
	
	for (i = 0; i < c; i++)
	{
		scanf("%d %d", &a, &b);
		
		pc[a - 1][b - 1] = 1;
		pc[b - 1][a - 1] = 1;
	}
	
	visited[0] = 1;
	
	CheckConnection(0);
	printf("%d", virus);
	
	return 0;
}

void CheckConnection(int v)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (visited[i] == 1 || pc[v][i] == 0)
		{
			continue;
		}
		
		visited[i] = 1;
		
		CheckConnection(i);
		
		virus++;
	}
}