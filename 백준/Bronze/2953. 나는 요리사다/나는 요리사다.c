#include <stdio.h>

int main(void)
{
	int i;
	int s1, s2, s3, s4;
	int sum, max = 0, index;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
		
		sum = s1 + s2 + s3 + s4;
		
		if (max < sum)
		{
			index = i + 1;
			max = sum;
		}
	}
	
	printf("%d %d", index, max);
	
	return 0;
}