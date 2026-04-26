#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main()
{
    int i, j;
    int n, m;
    int a[100000], b[100000];
    int x, pc = 1;
    
    scanf("%d %d", &n, &m);
    
    for (i = 0; i < n; scanf("%d", &a[i++]));
    for (i = 0; i < m; scanf("%d", &b[i++]));
    
    qsort(a, n, sizeof(int), Compare);
    qsort(b, m, sizeof(int), Compare);
    
    for (i = j = x = 0; i < n && j < m;)
    {
    	if (!x)
    	{
    		x += a[i++];
    		pc--;
		}
		
		for (; j < m && x; j++, x--)
		{
			pc += b[j];
		}
	}
    
    printf("%d", pc);
    
    return 0;
}

int Compare(const void* a, const void* b)
{
	return *(int*)b - *(int*)a;
}