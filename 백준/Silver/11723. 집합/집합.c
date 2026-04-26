#include <stdio.h>
#include <string.h>

#define SIZE_OF_SET 20

int s[SIZE_OF_SET];

void Add(int x);
void Remove(int x);
void Check(int x);
void Toggle(int x);
void All();
void Empty();

int main(void)
{
	int m;
	char op[7];
	int x;
	
	for (scanf("%d", &m); m > 0; m--)
	{
		scanf("%s", op);
		
		if (strcmp(op, "add") == 0)
		{
			scanf("%d", &x);
			Add(x);
		}
		else if (strcmp(op, "remove") == 0)
		{
			scanf("%d", &x);
			Remove(x);
		}
		else if (strcmp(op, "check") == 0)
		{
			scanf("%d", &x);
			Check(x);
		}
		else if (strcmp(op, "toggle") == 0)
		{
			scanf("%d", &x);
			Toggle(x);
		}
		else if (strcmp(op, "all") == 0)
		{
			All();
		}
		else if (strcmp(op, "empty") == 0)
		{
			Empty();
		}
	}
	
	return 0;
}

void Add(int x)
{
	s[x - 1] = 1;
}

void Remove(int x)
{
	s[x - 1] = 0;
}

void Check(int x)
{
	printf("%d\n", s[x - 1]);
}

void Toggle(int x)
{
	s[x - 1] = !s[x - 1];
}

void All()
{
	int i;
	
	for (i = 0; i < SIZE_OF_SET; i++)
	{
		s[i] = 1;
	}
}

void Empty()
{
	int i;
	
	for (i = 0; i < SIZE_OF_SET; i++)
	{
		s[i] = 0;
	}
}