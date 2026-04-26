#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int array[100] = { 0, };
	int sum = 0;
	int mode;
	int max = 0;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		
		array[n / 10 - 1]++;
		sum += n;
	}
	
	for(i = 0; i < 100; i++)
	{
		if (array[i] > max)
		{
			mode = (i + 1) * 10;
			max = array[i];
		}
	}
	
	printf("%d\n", sum / 10);
	printf("%d", mode);
	
	return 0;
}