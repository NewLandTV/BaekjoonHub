#include <stdio.h>

int main(void)
{
	int d, h, m;
	int total;
	
	scanf("%d %d %d", &d, &h, &m);
	
	if (d < 11 || (d <= 11 && h < 11) || (d <= 11 && h <= 11 && m < 11))
	{
		printf("-1");
		
		return 0;
	}
	
	d = (d - 11) * 1440;
	h = (h - 11) * 60;
	m -= 11;
	total = d + h + m;
	
	printf("%d", total);
	
	return 0;
}