#include <stdio.h>

int GetPisano(int n);

int main(void)
{
	int p;
	int n, m;
	
	scanf("%d", &p);
	
	while (p--)
	{
		scanf("%d %d", &n, &m);
		printf("%d %d\n", n, GetPisano(m));
	}
}

int GetPisano(int n)
{
	int i = 0;
	int a1 = 1, a2 = 1;
	int temp;
	
	do
	{
		temp = a1;
		a1 = a2;
		a2 = (temp + a2) % n;
		i++;
	}
	while (a1 != 1 || a2 != 1);
	
	return i;
}