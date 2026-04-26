#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
	char c;
	
	scanf("%c", &c);
	printf("%d", Abs('I' - c) + 84);
	
	return 0;
}