#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, temp;
	int n, x;
	int count = 0, deque[10000];
	char command[11];
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%s", command);
		
		if (!strcmp(command, "push_front"))
		{
			scanf("%d", &x);
			
			for (i = ++count; i > 1; i--)
			{
				temp = deque[i - 1];
				deque[i - 1] = deque[i - 2];
				deque[i - 2] = temp;
			}
			
			deque[0] = x;
		}
		else if (!strcmp(command, "push_back"))
		{
			scanf("%d", &x);
			
			deque[count++] = x;
		}
		else if (!strcmp(command, "pop_front"))
		{
			printf("%d\n", count == 0 ? -1 : deque[0]);
			
			for (i = 0; i < count - 1; i++)
			{
				temp = deque[i];
				deque[i] = deque[i + 1];
				deque[i + 1] = temp;
			}
			
			if (count > 0)
			{
				count--;
			}
		}
		else if (!strcmp(command, "pop_back"))
		{
			printf("%d\n", count == 0 ? -1 : deque[--count]);
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
			printf("%d\n", count == 0 ? -1 : deque[0]);
		}
		else if (!strcmp(command, "back"))
		{
			printf("%d\n", count == 0 ? -1 : deque[count - 1]);
		}
	}
	
	return 0;
}