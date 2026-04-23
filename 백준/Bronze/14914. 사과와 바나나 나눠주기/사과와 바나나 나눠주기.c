#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int i;
	int a, b;
	int cnt = 0, arr[100];
	
	scanf("%d %d", &a, &b);
	
	for (i = 1; i <= Min(a, b); i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			arr[cnt++] = i;
		}
	}
	
	for (i = 0; i < cnt; i++)
	{
		printf("%d %d %d\n", arr[i], a / arr[i], b / arr[i]);
	}
	
	return 0;
}