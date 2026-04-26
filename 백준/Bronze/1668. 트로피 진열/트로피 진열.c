#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int h[50];
	int left = 1;
	int right = 1;
	int max;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &h[i]);
	}
	
	for (max = h[0], i = 1; i < n; i++)
	{
		if (max < h[i])
		{
			left++;
			max = h[i];
		}
	}
	
	for (max = h[n - 1], i = n - 1; i >= 0; i--)
	{
		if (max < h[i])
		{
			right++;
			max = h[i];
		}
	}
	
	printf("%d\n", left);
	printf("%d", right);
	
	return 0;
}