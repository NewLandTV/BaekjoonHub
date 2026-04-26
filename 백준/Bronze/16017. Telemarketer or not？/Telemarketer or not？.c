#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int ignore;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	ignore = (a == 8 || a == 9) && (d == 8 || d == 9) && b == c;
	
	if (ignore)
	{
		printf("ignore");
		
		return 0;
	}
	
	printf("answer");
	
	return 0;
}