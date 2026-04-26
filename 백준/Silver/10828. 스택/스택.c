#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, x;
	int count = 0, stack[10000];
	char command[6];
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%s", &command);
		
		if (!strcmp(command, "push"))
		{
			scanf("%d", &x);
			
			stack[count++] = x;
		}
		else if (!strcmp(command, "pop"))
		{
			printf("%d\n", count == 0 ? -1 : stack[--count]);
		}
		else if (!strcmp(command, "size"))
		{
			printf("%d\n", count);
		}
		else if (!strcmp(command, "empty"))
		{
			printf("%d\n", count == 0);
		}
		else if (!strcmp(command, "top"))
		{
			printf("%d\n", count == 0 ? -1 : stack[count - 1]);
		}
	}
	
	return 0;
}