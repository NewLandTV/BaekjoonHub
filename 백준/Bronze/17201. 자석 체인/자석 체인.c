#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char a[11];
	
	scanf("%d", &n);
	scanf("%s", a);
	
	for (i = 1; i < n * 2; i++)
	{
		if (a[i - 1] == a[i])
		{
			printf("No");
			
			return 0;
		}
	}
	
	printf("Yes");
	
	return 0;
}