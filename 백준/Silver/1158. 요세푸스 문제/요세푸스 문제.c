#include <stdio.h>

int main(void)
{
	int i;
	int n, k;
	int live[5001];
	int a[5000];
	int aLen = 0;
	int x = 1;
	int c;
	int t;
	int prev;
	
	scanf("%d %d", &n, &k);
	
	for (i = 1; i <= n; i++)
	{
		live[i] = 1;
	}
	
	for (i = 0; i < n - 1; i++)
	{
		t = (k - 1) % (n - i) + 1;
		
		for (c = 1, prev = aLen; prev == aLen;)
		{
			if (live[x])
			{
				if (c == t)
				{
					live[x] = 0;
					a[aLen++] = x;
				}
				
				c++;
			}
			
			if (++x == n + 1)
			{
				x = 1;
			}
		}
	}
	
	for (i = 1; i <= n; i++)
	{
		if (live[i])
		{
			a[aLen++] = i;
			
			break;
		}
	}
	
	printf("<%d", a[0]);
	
	for (i = 1; i < aLen; i++)
	{
		printf(", %d", a[i]);
	}
	
	fputc('>', stdout);
	
	return 0;
}