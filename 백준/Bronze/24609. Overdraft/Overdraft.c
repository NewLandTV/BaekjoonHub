#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))
#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int n;
	int t;
	int sum = 0, x = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &t);
		
		sum += t;
		
		x = Min(sum, x);
	}
	
	printf("%d", Abs(x));
	
	return 0;
}