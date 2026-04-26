#include <stdio.h>

int main(void)
{
	int a, b, c;
	int min = 100;
	int score;
	
	scanf("%d %d %d", &a, &b, &c);
	
	score = a + b + c;
	
	if (a < min)
	{
		min = a;
	}
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}
	
	score -= min;
	
	printf("%d", score);
	
	return 0;
}