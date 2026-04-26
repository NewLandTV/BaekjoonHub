#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char temp;
	char a[4];
	char b[4];
	
	scanf("%s %s", a, b);
	
	temp = a[0];
	a[0] = a[2];
	a[2] = temp;
	
	temp = b[0];
	b[0] = b[2];
	b[2] = temp;
	
	if (atoi(a) > atoi(b))
	{
		printf("%s", a);
		
		return 0;
	}
	
	printf("%s", b);
	
	return 0;
}