#include <stdio.h>

#define MAX_LENGTH 78

int main(void)
{
	int i, j, k;
	int s1, s2, s3;
	int sum[MAX_LENGTH] = { 0, };
	int max = 0, index = 0;
	
	scanf("%d %d %d", &s1, &s2, &s3);
	
	for (i = 1; i <= s1; i++)
	{
		for (j = 1; j <= s2; j++)
		{
			for (k = 1; k <= s3; k++)
			{
				sum[i + j + k - 3]++;
			}
		}
	}
	
	for (i = 3; i <= s1 + s2 + s3; i++)
	{
		if (sum[i - 3] > max)
		{
			max = sum[i - 3];
			index = i;
		}
	}
	
	printf("%d", index);
	
	return 0;
}