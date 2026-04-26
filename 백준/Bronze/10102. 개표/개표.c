#include <stdio.h>

int main(void)
{
	int i;
	int v;
	char s[16];
	int a, b;
	
	scanf("%d", &v);
	scanf("%s", s);
	
	for (i = a = b = 0; i < v; i++)
	{
		s[i] == 'A' ? a++ : b++;
	}
	
	if (a == b)
	{
		printf("Tie");
		
		return 0;
	}
	
	printf("%c", a > b ? 'A' : 'B');
	
	return 0;
}