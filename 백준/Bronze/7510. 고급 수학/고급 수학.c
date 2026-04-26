#include <stdio.h>

int main(void)
{
    int i;
    int n;
    unsigned long long a, b, c;
    int isRightAngle;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        scanf("%llu %llu %llu", &a, &b, &c);
        printf("Scenario #%d:\n", i);
        
        isRightAngle =  a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a;
        
        printf("%s\n\n", isRightAngle ? "yes" : "no");
    }
    
    return 0;
}