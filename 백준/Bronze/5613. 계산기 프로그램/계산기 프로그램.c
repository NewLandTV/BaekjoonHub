#include <stdio.h>

int main(void)
{
	int n;
	char op;
	int result;
	
	scanf("%d", &n);
	
	result = n;
	
	while (1)
	{
		scanf(" %c", &op);
		
		if (op == '=')
		{
			break;
		}
		
		scanf("%d", &n);
		
		switch (op)
		{
		case '+':
			result += n;
			
			break;
		case '-':
			result -= n;
			
			break;
		case '*':
			result *= n;
			
			break;
		case '/':
			result /= n;
			
			break;
		}
	}
	
	printf("%d", result);
	
	return 0;
}