#include <stdio.h>

int main(void)
{
	int input, i;
	int sum = 1;
	int data[10];
	
	for (i = 0; i < 10; i++)
	{
		data[i] = 0;
	}
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &input);
		
		sum *= input;
	}
	for (i = 0; sum > 0; i++)
	{
		input = sum % 10;
		data[input] += 1;
		sum /= 10;
	}
	
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", data[i]);
	}
	
	return 0;
}