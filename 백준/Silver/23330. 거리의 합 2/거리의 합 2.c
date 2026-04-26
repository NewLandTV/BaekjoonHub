#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

#define ll long long

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int n;
	ll* x;
	ll sum = 0;
	
	scanf("%d", &n);
	
	x = (ll*)malloc(sizeof(ll) * n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%lld", &x[i]);
	}
	
	qsort(x, n, sizeof(ll), Compare);
	
	for (i = 0; i < n; i++)
	{
		sum += x[i] * (i * 2 - n + 1) * 2;
	}
	
	free(x);
	printf("%lld", sum);
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	ll n1 = *(ll*)a;
	ll n2 = *(ll*)b;
	
	if (n1 == n2)
	{
		return 0;
	}
	
	return n1 > n2 ? 1 : -1;
}