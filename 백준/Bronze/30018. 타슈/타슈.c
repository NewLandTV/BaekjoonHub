#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	int n;
	int a[100], b;
	int sum = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b);
		
		sum += Max(a[i] - b, 0);
	}
	
	printf("%d", sum);
	
	return 0;
}