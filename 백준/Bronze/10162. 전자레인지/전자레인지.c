#include <stdio.h>

int main(void)
{
	int t;
	int a = 0, b = 0, c = 0;
	
	scanf("%d", &t);
	
	if (t % 10 != 0)
	{
		printf("-1");
		
		return 0;
	}
	
	while (t >= 300)
	{
		t -= 300;
		a++;
	}
	
	while (t >= 60)
	{
		t -= 60;
		b++;
	}
	
	while (t >= 10)
	{
		t -= 10;
		c++;
	}
	
	printf("%d %d %d", a, b, c);
	
	return 0;
}