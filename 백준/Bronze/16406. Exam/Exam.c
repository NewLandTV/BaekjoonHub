#include <stdio.h>
#include <string.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
	int i;
	int k;
	char a[1001], b[1001];
	int n, c;
	
	scanf("%d", &k);
	scanf("%s", a);
	scanf("%s", b);
	
	n = strlen(a);
	
	for (i = c = 0; i < n; i++)
	{
		if (a[i] == b[i])
		{
			c++;
		}
	}
	
	printf("%d", n - Abs(k - c));
	
	return 0;
}