#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int x;
	char command[6];
	int* queue;
	int size = 0;
	int head = 0;
	
	scanf("%d", &n);
	
	queue = (int*)malloc(sizeof(int) * n);
	
	for (; n > 0; n--)
	{
		scanf("%s", command);
		
		if (strcmp(command, "push") == 0)
		{
			scanf("%d", &x);
			
			queue[head + size++] = x;
		}
		else if (strcmp(command, "pop") == 0)
		{
			if (size == 0)
			{
				printf("-1\n");
				
				continue;
			}
			
			printf("%d\n", queue[head++]);
			size--;
		}
		else if (strcmp(command, "size") == 0)
		{
			printf("%d\n", size);
		}
		else if (strcmp(command, "empty") == 0)
		{
			printf("%d\n", size == 0);
		}
		else if (strcmp(command, "front") == 0)
		{
			printf("%d\n", size > 0 ? queue[head] : -1);
		}
		else if (strcmp(command, "back") == 0)
		{
			printf("%d\n", size > 0 ? queue[head + size - 1] : -1);
		}
	}
	
	free(queue);
	
	return 0;
}