#include <stdio.h>

int main(void)
{
	int n;
	int a;
	int oddCount = 0;
	int evenCount = 0;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%d", &a);
		
		if (a & 1)
		{
			oddCount++;
			
			continue;
		}
		
		evenCount++;
	}
	
	printf("%s", evenCount > oddCount ? "Happy" : "Sad");
	
	return 0;
}