#include <stdio.h>

void Convert(char* x);

int main(void)
{
	int c;
	char x[1000001];
	
	scanf("%s", x);
	
	for (c = 0; x[1] != 0; c++)
	{
		Convert(x);
	}
	
	printf("%d\n", c);
	printf("%s", (x[0] - 48) % 3 == 0 ? "YES" : "NO");
	
	return 0;
}

void Convert(char* x)
{
	int i;
	int sum = 0;
	
	for (i = 0; x[i]; i++)
	{
		sum += x[i] - 48;
	}
	
	sprintf(x, "%d", sum);
}