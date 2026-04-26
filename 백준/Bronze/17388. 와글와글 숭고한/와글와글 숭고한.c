#include <stdio.h>

int main(void)
{
	int s, k, h;
	int min = 100;
	
	scanf("%d %d %d", &s, &k, &h);
	
	if (s + k + h >= 100)
	{
		printf("OK");
		
		return 0;
	}
	
	if (min > s)
	{
		min = s;
		
		if (s < k && s < h)
		{
			printf("Soongsil");
			
			return 0;
		}
	}
	
	if (min > k)
	{
		min = k;
		
		if (k < h)
		{
			printf("Korea");
			
			return 0;
		}
	}
	
	if (min > h)
	{
		printf("Hanyang");
		
		return 0;
	}
	
	return 0;
}