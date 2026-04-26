#include <stdio.h>

int main(void)
{
	int n;
	int x;
	int cute = 0;
	int notCute = 0;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%d", &x);
		
		if (x == 1)
		{
			cute++;
			
			continue;
		}
		
		notCute++;
	}
	
	printf("Junhee is %s!", cute > notCute ? "cute" : "not cute");
	
	return 0;
}