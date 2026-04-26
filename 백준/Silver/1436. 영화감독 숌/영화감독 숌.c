#include <stdio.h>

int main(void)
{
	int n;
	int count, temp;
	int value = 0;
	
	scanf("%d", &n);
	
	for (count = 0; count != n;)
	{
		for (temp = ++value; temp != 0; temp /= 10)
		{
			if (temp % 1000 == 666)
			{
				count++;
				
				break;
			}
		}
	}
	
	printf("%d", value);
	
	return 0;
}