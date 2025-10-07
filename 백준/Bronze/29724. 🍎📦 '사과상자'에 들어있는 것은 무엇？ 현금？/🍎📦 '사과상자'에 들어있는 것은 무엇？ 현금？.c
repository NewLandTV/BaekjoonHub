#include <stdio.h>

int main(void)
{
	int n;
	char t;
	int w, h, l;
	int mass = 0, count = 0;
	int price;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf(" %c %d %d %d", &t, &w, &h, &l);
		
		if (t != 'A')
		{
			mass += 6000;
			
			continue;
		}
		
		count += (w / 12) * (h / 12) * (l / 12);
		mass += 1000;
	}
	
	mass += count * 500;
	price = count * 4000;
	
	printf("%d\n", mass);
	printf("%d", price);
	
	return 0;
}