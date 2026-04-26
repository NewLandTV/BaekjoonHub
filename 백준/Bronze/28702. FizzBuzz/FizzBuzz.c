#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a[9], b[9], c[9];
	int i1, i2, i3;
	int i, amount;
	int next;
	
	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);
	
	i1 = atoi(a);
	i2 = atoi(b);
	i3 = atoi(c);
	
	if (i1 != 0)
	{
		i = i1;
		amount = 3;
	}
	
	if (i2 != 0)
	{
		i = i2;
		amount = 2;
	}
	
	if (i3 != 0)
	{
		i = i3;
		amount = 1;
	}
	
	next = i + amount;
	
	if (next % 3 == 0)
	{
		printf("Fizz%s", next % 5 == 0 ? "Buzz" : "");
		
		return 0;
	}
	
	if (next % 5 == 0)
	{
		printf("Buzz");
		
		return 0;
	}
	
	printf("%d", next);
	
	return 0;
}