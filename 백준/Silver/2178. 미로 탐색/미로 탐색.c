#include <stdio.h>

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
char map[100][101];
int visited[100][100];
int queue[10000];

int BFS(int startX, int startY, int width, int height);

int main(void)
{
	int i;
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; i++)
	{
		scanf(" %s", map[i]);
	}
	
	printf("%d", BFS(0, 0, m, n));
	
	return 0;
}

int BFS(int startX, int startY, int width, int height)
{
	int i;
	int front = -1, rear = -1;
	int pos, dist;
	int x, y, nx, ny;
	
	visited[startX][startY] = 1;
	queue[++rear] = startX + startY * width;
	queue[++rear] = 1;
	
	while (front < rear)
	{
		pos = queue[++front];
		dist = queue[++front];
		x = pos % width;
		y = pos / width;
		
		if (x == width - 1 && y == height - 1)
		{
			return dist;
		}
		
		for (i = 0; i < 4; i++)
		{
			nx = x + dx[i];
			ny = y + dy[i];
			
			if (nx >= 0 && nx < width && ny >= 0 && ny < height && visited[ny][nx] == 0 && map[ny][nx] == '1')
			{
				visited[ny][nx] = 1;
				queue[++rear] = nx + ny * width;
				queue[++rear] = dist + 1;
			}
		}
	}
	
	return -1;
}