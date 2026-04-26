#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	unsigned long long data[10000] = { 0, };
	
	scanf("%d", &n);
	
	for (i = 0; i < n; scanf("%d", &j), data[j - 1]++, i++);
	for (i = 0; i < 10000; i++)
	{
		for (j = 0; j < data[i]; printf("%d\n", i + 1), j++);
	}
	
	return 0;
}