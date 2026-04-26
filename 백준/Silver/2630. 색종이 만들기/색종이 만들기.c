#include <stdio.h>

int a[128][128];
int white, blue;

int Check(int size, int x, int y);
void Search(int size, int x, int y);

int main(void)
{
    int i, j;
    int n;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    Search(n, 0, 0);
    printf("%d\n%d", white, blue);
    
    return 0;
}

int Check(int size, int x, int y)
{
    int i, j;
    int w = 0, b = 0;
    
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (a[i + x][j + y])
            {
                b++;
            }
            else
            {
                w++;
            }
        }
    }
    
    return w == size * size || b == size * size;
}

void Search(int size, int x, int y)
{
    if (Check(size, x, y))
    {
        if (a[x][y])
        {
            blue++;
        }
        else
        {
            white++;
        }
        
        return;
    }
    
    Search(size >> 1, x, y);
    Search(size >> 1, x + (size >> 1), y);
    Search(size >> 1, x, y + (size >> 1));
    Search(size >> 1, x + (size >> 1), y + (size >> 1));
}