#include <stdio.h>

int main(void)
{
	int n, x;
	int a;
	int cur = 0, pre = 0;
	int min = 2000;
	
	scanf("%d %d", &n, &x);
	
	for (; n > 0; n--)
	{
		scanf("%d", &a);
		
		if (cur == 0)
		{
			cur = a;
			
			continue;
		}
		
		pre = cur;
		cur += a;
		
		if (cur < min)
		{
			min = cur;
		}
		
		cur -= pre;
	}
	
	printf("%d", min * x);
	
	return 0;
}