#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int x, i, j;
    int n, m, min;
    char rect[51][52];
    int line = 1;
    
    scanf("%d %d", &n, &m);
    
    min = Min(n, m);
    
    for (i = 0; i < n; i++)
    {
        scanf("%s", rect[i]);
    }
    
    for (x = 0; x < min; x++)
    {
        for (i = 0; i < n - x; i++)
        {
            for (j = 0; j < m - x; j++)
            {
                if (rect[i][j] == rect[i + x][j + x] && rect[i][j] == rect[i][j + x] && rect[i][j] == rect[i + x][j])
                {
                    line = Max(line, x + 1);
                }
            }
        }
    }
    
    printf("%d", line * line);
    
    return 0;
}