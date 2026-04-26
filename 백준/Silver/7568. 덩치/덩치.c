#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int weightList[50];
	int heightList[50];
	int gradeList[50] = { 0, };
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &weightList[i], &heightList[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (weightList[i] < weightList[j] && heightList[i] < heightList[j])
			{
				gradeList[i]++;
			}
		}
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", gradeList[i] + 1);
	}
	
	return 0;
}