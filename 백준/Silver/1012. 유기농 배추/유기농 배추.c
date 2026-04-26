#include <stdio.h>

int m, n;
int map[50][50];

void DFS(int x, int y);

int main(void)
{
    int t;
    int k;
    int x, y;
    int cnt;
    
    scanf("%d", &t);
    
    while (t--)
    {
        scanf("%d %d %d", &m, &n, &k);
        
        while (k--)
        {
            scanf("%d %d", &x, &y);
            
            map[x][y] = 1;
        }
        
        for (cnt = x = 0; x < m; x++)
        {
            for (y = 0; y < n; y++)
            {
                if (map[x][y])
                {
                    DFS(x, y);
                    
                    cnt++;
                }
            }
        }
        
        printf("%d\n", cnt);
    }
    
    return 0;
}

void DFS(int x, int y)
{
    map[x][y] = 0;
    
    if (x > 0 && map[x - 1][y])
    {
        DFS(x - 1, y);
    }
    if (x < m - 1 && map[x + 1][y])
    {
        DFS(x + 1, y);
    }
    if (y > 0 && map[x][y - 1])
    {
        DFS(x, y - 1);
    }
    if (y < n - 1 && map[x][y + 1])
    {
        DFS(x, y + 1);
    }
}