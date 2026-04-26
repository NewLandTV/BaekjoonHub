#include <stdio.h>
#include <math.h>

#define MAX 1000000
#define F(x) ((x) % MAX)

int x[MAX + 1];

int DP(int i);

int main(void)
{
    int i;
    
    x[0] = 1;
    
    while (1)
    {
        scanf("%d", &i);
        
        if (i == -1)
        {
            break;
        }
        
        printf("%d\n", DP(i));
    }
    
    return 0;
}

int DP(int i)
{
    if (x[i] != 0)
    {
        return x[i];
    }
    
    int a = floor(i - sqrt(i));
    int b = floor(log(i));
    int c = floor(i * pow(sin(i), 2));
    int p = F(DP(a));
    int q = F(DP(b));
    int r = F(DP(c));
    
    x[i] = F(p + q + r);
    
    return x[i];
}