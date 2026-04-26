#include <stdio.h>

int main(void)
{
	int h1, b1;
	int h2, b2;
	int s1, s2;
	
	scanf("%d %d", &h1, &b1);
	scanf("%d %d", &h2, &b2);
	
	s1 = h1 * 3 + b1;
	s2 = h2 * 3 + b2;
	
	if (s1 == s2)
	{
		printf("NO SCORE");
	}
	else if (s1 < s2)
	{
		printf("2 %d", s2 - s1);
	}
	else
	{
		printf("1 %d", s1 - s2);
	}
	
	return 0;
}