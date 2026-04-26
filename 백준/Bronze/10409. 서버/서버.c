#include <stdio.h>

int main(void)
{
	int i;
	int n, t;
	int a;
	int count = 0;
	
	scanf("%d %d", &n, &t);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		
		if (t < a)
		{
			printf("%d", count);
			
			return 0;
		}
		
		t -= a;
		count++;
	}
	
	printf("%d", count);
	
	return 0;
}