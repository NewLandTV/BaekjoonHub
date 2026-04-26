#include <stdio.h>

int main(void)
{
	int n;
	long long a, b;
	long long result = 1;
	char op;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%lld %c %lld", &a, &op, &b);
		
		switch (op)
		{
		case '+':
			result = a + b - result;
			
			break;
		case '-':
			result = (a - b) * result;
			
			break;
		case '*':
			result = a * a * b * b;
			
			break;
		case '/':
			result = a + (a & 1) >> 1;
			
			break;
		}
		
		printf("%lld\n", result);
	}
	
	return 0;
}