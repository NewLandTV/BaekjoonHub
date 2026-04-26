#include <stdio.h>

int main(void)
{
	int t;
	long long a, b, c;
	char op, equal;
	int correct;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%lld %c %lld %c %lld", &a, &op, &b, &equal, &c);
		
		switch (op)
		{
			case '+':
				correct = a + b == c;
				
				break;
			case '-':
				correct = a - b == c;
				
				break;
			case '*':
				correct = a * b == c;
				
				break;
			case '/':
				correct = a / b == c;
				
				break;
		}
		
		printf("%s\n", correct ? "correct" : "wrong answer");
	}
	
	return 0;
}