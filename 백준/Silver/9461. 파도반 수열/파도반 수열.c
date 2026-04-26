#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n;
	unsigned long long seq[101] = { 0, 1, 1, 1, 2, };
	
	for (i = 5; i <= 100; i++)
	{
		seq[i] = seq[i - 1] + seq[i - 5];
	}
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		printf("%llu\n", seq[n]);
	}
	
	return 0;
}