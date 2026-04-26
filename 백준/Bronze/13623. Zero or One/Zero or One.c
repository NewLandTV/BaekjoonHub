#include <stdio.h>

int main(void)
{
	int a, b, c;
	char winner;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == b && b == c)
	{
		winner = '*';
	}
	else if (a == b && b != c)
	{
		winner = 'C';
	}
	else if (a != b && b == c)
	{
		winner = 'A';
	}
	else
	{
		winner = 'B';
	}
	
	printf("%c", winner);
	
	return 0;
}