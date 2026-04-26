#include <stdio.h>

int main(void)
{
	int i;
	char s[6];
	int x;
	int answer = 0;
	
	for (i = 0; i < 4; i++)
	{
		scanf("%s %d", s, &x);
		
		answer += x * (s[0] == 'E' ? 21 : 17);
	}
	
	printf("%d", answer);
	
	return 0;
}