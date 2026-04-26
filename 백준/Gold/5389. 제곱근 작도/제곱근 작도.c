#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int first, second;
} Pair, *PPair;

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int t;
	int n;
	int s, r;
	int size;
	Pair p[31622];
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		
		for (i = 1, size = 0; i * i <= n; i++)
		{
			if (n % i != 0)
			{
				continue;
			}
			
			s = n / i + i;
			
			if (s & 1)
			{
				continue;
			}
			
			r = s >> 1;
			p[size].first = r - i;
			p[size++].second = r;
		}
		
		if (size == 0)
		{
			printf("IMPOSSIBLE\n");
			
			continue;
		}
		
		qsort(p, size, sizeof(Pair), Compare);
		printf("%d %d\n", p[0].first, p[0].second);
	}
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	PPair p1 = (PPair)a;
	PPair p2 = (PPair)b;
	
	if (p1->first != p2->first)
	{
		return p1->first - p2->first;
	}
	
	return p1->second - p2->second;
}