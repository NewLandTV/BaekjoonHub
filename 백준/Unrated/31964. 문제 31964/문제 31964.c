#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

typedef struct
{
    int x, t;
} Pair;

int main(void)
{
    int i;
    int n;
    Pair p[3000];
    int c, t;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i].x);
    }
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i].t);
    }
    
    c = p[n - 1].x;
    t = Max(c, p[n - 1].t);
    
    for (i = n - 2; i >= 0; i--)
    {
        t += c - p[i].x;
        
        if (t < p[i].t)
        {
            t += p[i].t - t;
        }
        
        c = p[i].x;
    }
    
    t += c;
    
    printf("%d", t);
    
    return 0;
}