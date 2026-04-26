#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		
		printf("%s\n", a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b ? "right" : "wrong");
	}
	
	return 0;
}