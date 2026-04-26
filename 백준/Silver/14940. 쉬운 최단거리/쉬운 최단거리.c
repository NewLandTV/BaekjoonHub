#include <stdio.h>

typedef struct
{
    int x, y, d;
} Coord;

int n, m;
int map[1000][1000];
int result[1000][1000];
Coord queue[1000000];
int front, rear;

void Enqueue(Coord v);
Coord Dequeue();
int IsEmpty();
void BFS(int x, int y);

int main(void)
{
    int i, j;
    int x, y;
    
    scanf("%d %d", &n, &m);
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &map[i][j]);
            
            if (map[i][j] == 2)
            {
                x = i;
                y = j;
            }
            if (map[i][j] != 0)
            {
            	result[i][j] = -1;
            }
        }
    }
    
    BFS(x, y);
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", result[i][j]);
        }
        
        printf("\n");
    }
    
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

void BFS(int x, int y)
{
    int i, j;
    Coord c = { x, y, 0 }, t;
    
    map[x][y] = 0;
    
    Enqueue(c);
    
    while (!IsEmpty())
    {
        c = Dequeue();
        result[c.x][c.y] = c.d++;
        
        if (c.x > 0 && map[c.x - 1][c.y])
        {
        	t.x = c.x - 1;
            t.y = c.y;
            result[t.x][t.y] = t.d = c.d;
            map[t.x][t.y] = 0;
            
            Enqueue(t);
        }
        if (c.x < n - 1 && map[c.x + 1][c.y])
        {
        	t.x = c.x + 1;
            t.y = c.y;
            result[t.x][t.y] = t.d = c.d;
            map[t.x][t.y] = 0;
            
            Enqueue(t);
        }
        if (c.y > 0 && map[c.x][c.y - 1])
        {
        	t.x = c.x;
            t.y = c.y - 1;
            result[t.x][t.y] = t.d = c.d;
            map[t.x][t.y] = 0;
            
            Enqueue(t);
        }
        if (c.y < m - 1 && map[c.x][c.y + 1])
        {
            t.x = c.x;
            t.y = c.y + 1;
			result[t.x][t.y] = t.d = c.d;
            map[t.x][t.y] = 0;
            
            
            Enqueue(t);
        }
    }
}