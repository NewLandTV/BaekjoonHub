#include <stdio.h>

int main(void)
{
	int a, p;
	int x, y;
	
	scanf("%d %d", &a, &p);
	
	x = a * 7;
	y = p * 13;
	
	if (x == y)
	{
		printf("lika");
		
		return 0;
	}
	
	printf("%s", x > y ? "Axel" : "Petra");
	
	return 0;
}