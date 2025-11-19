#include <stdio.h>

int main(void)
{
	int d;
	int e;
	char op;
	int q;
	
	scanf("%d", &d);
	scanf("%d", &e);
	
	while (e--)
	{
		scanf(" %c", &op);
		scanf("%d", &q);
		
		if (op == '+')
		{
			d += q;
		}
		else
		{
			d -= q;
		}
	}
	
	printf("%d", d);
	
	return 0;
}