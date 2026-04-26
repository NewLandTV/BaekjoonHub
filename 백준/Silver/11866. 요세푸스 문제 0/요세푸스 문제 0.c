#include <stdio.h>

int main(void)
{
	int i, j;
	int n, k;
	int t;
	int front = -1, rear = -1;
	int live[1000] = { 0, };
	
	scanf("%d %d", &n, &k);
	
	for (i = 1; i <= n; i++)
	{
		rear = (rear + 1) % n;
		live[rear] = i;
	}
	
	for (j = 1; j < k; j++)
	{
		front = (front + 1) % n;
		t = live[front];
		rear = (rear + 1) % n;
		live[rear] = t;
	}
	
	front = (front + 1) % n;
	t = live[front];
	
	printf("<%d", t);
	
	for (i = 1; i < n; i++)
	{
		for (j = 1; j < k; j++)
		{
			front = (front + 1) % n;
			t = live[front];
			rear = (rear + 1) % n;
			live[rear] = t;
		}
		
		front = (front + 1) % n;
		t = live[front];
		
		if (t == 0)
		{
			break;
		}
		
		printf(", %d", t);
	}
	
	printf(">");
	
	return 0;
}