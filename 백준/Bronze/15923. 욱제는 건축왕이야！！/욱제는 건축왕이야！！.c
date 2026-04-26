#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
	int i;
	int n;
	int x[20], y[20];
	int l = 0;
	
	scanf("%d", &n);
	scanf("%d %d", &x[0], &y[0]);
	
	for (i = 1; i < n; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
		
		l += Abs(x[i] - x[i - 1] + y[i] - y[i - 1]);
	}
	
	l += Abs(x[n - 1] - x[0] + y[n - 1] - y[0]);
	
	printf("%d", l);
	
	return 0;
}