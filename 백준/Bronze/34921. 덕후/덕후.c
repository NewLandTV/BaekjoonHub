#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int a, t;
    
    scanf("%d %d", &a, &t);
    printf("%d", Max((t - a) * 2 + 60, 0));
    
	return 0;
}