#include <stdio.h>

int main(void)
{
	int b;
	int w, p, n;
	
	scanf("%d", &b);
	scanf("%d", &w);
	scanf("%d", &p);
	scanf("%d", &n);
	
	if (b >= w)
	{
		printf("Watermelon");
	}
	else if (b >= p)
	{
		printf("Pomegranates");
	}
	else if (b >= n)
	{
		printf("Nuts");
	}
	else
	{
		printf("Nothing");
	}
	
	return 0;
}