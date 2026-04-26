#include <stdio.h>

int main(void)
{
	int i, j;
	int arr[3];
	int temp;
	int x;
	
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	
	if (arr[0] == arr[1] && arr[1] == arr[2])
	{
		printf("0");
		
		return 0;
	}
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	x = arr[2] * 2 - arr[0] - arr[1];
	
	printf("%d", x);
	
	return 0;
}