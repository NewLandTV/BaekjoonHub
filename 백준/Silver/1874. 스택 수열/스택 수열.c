#include <stdio.h>
#include <memory.h>

int main(void)
{
	int i;
	int n;
	int num;
	int c = 1;
	int flag = 1;
	int* stack, stackCount = 0;
	char* op;
	int opCount = 0;
	
	scanf("%d", &n);
	
	stack = (int*)malloc(sizeof(int) * n);
	op = (char*)malloc(n * 2);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		
		for (; c <= num; c++)
		{
			stack[stackCount++] = c;
			op[opCount++] = '+';
		}
		
		if (stack[stackCount - 1] == num)
		{
			stackCount--;
			op[opCount++] = '-';
		}
		else
		{
			flag = 0;
			
			break;
		}
	}
	
	free(stack);
	
	if (!flag)
	{
		printf("NO");
		free(op);
		
		return 0;
	}
	
	for (i = 0; i < opCount; i++)
	{
		printf("%c\n", op[i]);
	}
	
	free(op);
	
	return 0;
}