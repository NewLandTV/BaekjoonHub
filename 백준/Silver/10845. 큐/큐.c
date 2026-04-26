#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, temp;
	int n, x;
	int count = 0, queue[10000];
	char command[6];
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%s", &command);
		
		if (!strcmp(command, "push"))
		{
			scanf("%d", &x);
			
			queue[count++] = x;
		}
		else if (!strcmp(command, "pop"))
		{
			printf("%d\n", count == 0 ? -1 : queue[0]);
			
			for (i = 0; i < count - 1; i++)
			{
				temp = queue[i];
				queue[i] = queue[i + 1];
				queue[i + 1] = temp;
			}
			
			if (count > 0)
			{
				count--;
			}
		}
		else if (!strcmp(command, "size"))
		{
			printf("%d\n", count);
		}
		else if (!strcmp(command, "empty"))
		{
			printf("%d\n", count == 0);
		}
		else if (!strcmp(command, "front"))
		{
			printf("%d\n", count == 0 ? -1 : queue[0]);
		}
		else if (!strcmp(command, "back"))
		{
			printf("%d\n", count == 0 ? -1 : queue[count - 1]);
		}
	}
	
	return 0;
}