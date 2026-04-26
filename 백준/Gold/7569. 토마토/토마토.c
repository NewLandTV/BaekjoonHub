#include <stdio.h>

typedef struct
{
	int x, y, z, d;
} Coord;

int m, n, h;
int tomatos[100][100][100];
Coord queue[1000000];
int front, rear;
int cnt, target;

void Enqueue(Coord v);
Coord Dequeue();
int IsEmpty();
int BFS();

int main(void)
{
	int i, j, k;
	Coord c = { 0, };
	
	scanf("%d %d %d", &m, &n, &h);
	
	for (k = 0; k < h; k++)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < m; i++)
			{
				scanf("%d", &tomatos[k][j][i]);
				
				if (tomatos[k][j][i] != -1)
				{
					target++;
				}
				if (tomatos[k][j][i] != 1)
				{
					continue;
				}
				
				c.x = i;
				c.y = j;
				c.z = k;
				cnt++;
				
				Enqueue(c);
			}
		}
	}
	
	printf("%d", BFS());
	
	return 0;
}

void Enqueue(Coord v)
{
    queue[rear++] = v;
}

Coord Dequeue()
{
    return queue[front++];
}

int IsEmpty()
{
    return front == rear;
}

int BFS(int x, int y)
{
	int day = 0;
	Coord c, t;
	
	while (!IsEmpty())
	{
		c = Dequeue();
		
		if (c.x > 0 && !tomatos[c.z][c.y][c.x - 1])
        {
        	t.x = c.x - 1;
            t.y = c.y;
            t.z = c.z;
            t.d = day = c.d + 1;
            tomatos[t.z][t.y][t.x] = 1;
            cnt++;
            
            Enqueue(t);
        }
        if (c.x < m - 1 && !tomatos[c.z][c.y][c.x + 1])
        {
        	t.x = c.x + 1;
            t.y = c.y;
            t.z = c.z;
            t.d = day = c.d + 1;
            tomatos[t.z][t.y][t.x] = 1;
            cnt++;
            
            Enqueue(t);
        }
        if (c.y > 0 && !tomatos[c.z][c.y - 1][c.x])
        {
        	t.x = c.x;
            t.y = c.y - 1;
            t.z = c.z;
            t.d = day = c.d + 1;
            tomatos[t.z][t.y][t.x] = 1;
            cnt++;
            
            Enqueue(t);
        }
        if (c.y < n - 1 && !tomatos[c.z][c.y + 1][c.x])
        {
            t.x = c.x;
            t.y = c.y + 1;
            t.z = c.z;
            t.d = day = c.d + 1;
            tomatos[t.z][t.y][t.x] = 1;
            cnt++;
            
            Enqueue(t);
        }
        if (c.z > 0 && !tomatos[c.z - 1][c.y][c.x])
        {
            t.x = c.x;
            t.y = c.y;
            t.z = c.z - 1;
            t.d = day = c.d + 1;
            tomatos[t.z][t.y][t.x] = 1;
            cnt++;
            
            Enqueue(t);
        }
        if (c.z < h - 1 && !tomatos[c.z + 1][c.y][c.x])
        {
            t.x = c.x;
            t.y = c.y;
            t.z = c.z + 1;
            t.d = day = c.d + 1;
            tomatos[t.z][t.y][t.x] = 1;
            cnt++;
            
            Enqueue(t);
        }
	}
	
	return cnt == target ? day : -1;
}