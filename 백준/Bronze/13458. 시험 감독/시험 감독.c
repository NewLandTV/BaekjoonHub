#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int n;
	int* a;
	int b, c;
	long long result = 0;
	
	scanf("%d", &n);
	
	a = (int*)malloc(sizeof(int) * n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	scanf("%d %d", &b, &c);
	
	for (i = 0; i < n; i++)
	{
		a[i] -= b;
		result++;
		
		if (a[i] <= 0)
		{
			continue;
		}
		
		result += (a[i] % c == 0 ? a[i] / c : a[i] / c + 1);
	}
	
	free(a);
	printf("%lld", result);
	
	return 0;
}