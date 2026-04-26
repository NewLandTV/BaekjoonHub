#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int n;
	int a, b;
	int l = -1, r = 200000;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &a, &b);
		
		if (l == -1)
		{
			l = a;
			r = b;
			
			continue;
		}
		
		l = Max(l, a);
		r = Min(r, b);
	}
	
	if (l <= r)
	{
		printf("%d %d", r - l + 1, l);
	}
	else
	{
		printf("bad news");
	}
	
	return 0;
}