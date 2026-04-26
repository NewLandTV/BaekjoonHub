#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char names[101][101];
	int dollars[101];
	int max = 0, maxIndex = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", names[i]);
		scanf("%d", &dollars[i]);
		
		if (max < dollars[i])
		{
			max = dollars[i];
			maxIndex = i;
		}
	}
	
	printf("%s", names[maxIndex]);
	
	return 0;
}