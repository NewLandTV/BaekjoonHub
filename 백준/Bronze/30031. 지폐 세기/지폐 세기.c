#include <stdio.h>

int main(void)
{
	int n;
	int width, height;
	int total = 0;
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%d %d", &width, &height);
		
		switch (width)
		{
		case 136:
			total += 1000;
			
			break;
		case 142:
			total += 5000;
			
			break;
		case 148:
			total += 10000;
			
			break;
		case 154:
			total += 50000;
			
			break;
		}
	}
	
	printf("%d", total);
	
	return 0;
}