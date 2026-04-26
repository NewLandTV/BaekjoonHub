#include <stdio.h>
#include <math.h>

int main(void)
{
	int s1, s2;
	
	scanf("%d %d", &s1, &s2);
	printf("%c", s1 >= ceil(s2 * 0.5f)  ? 'E' : 'H');
	
	return 0;
}