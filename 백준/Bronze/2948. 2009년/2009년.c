#include <stdio.h>

int main(void)
{
    int d, m;
    int n[13] =
    {
        0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365
    };
    
    char* s[7] =
    {
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday"
    };
    
    scanf("%d %d", &d, &m);
    printf("%s", s[(n[m - 1] + d - 1) % 7]);
                   
    return 0;
}