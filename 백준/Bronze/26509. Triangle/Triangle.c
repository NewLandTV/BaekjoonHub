#include <stdio.h>

void Sort(int* array, int n);

int main(void)
{
	int n;
	int t1[3], t2[3];
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d %d", &t1[0], &t1[1], &t1[2]);
		scanf("%d %d %d", &t2[0], &t2[1], &t2[2]);
		Sort(t1, 3);
		Sort(t2, 3);
		
		if (t1[0] == t2[0] && t1[1] == t2[1] && t1[2] == t2[2] && t1[0] * t1[0] + t1[1] * t1[1] == t1[2] * t1[2])
		{
			printf("YES\n");
			
			continue;
		}
		
		printf("NO\n");
	}
	
	return 0;
}

void Sort(int* array, int n)
{
	int i, j;
	int temp;
	
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}