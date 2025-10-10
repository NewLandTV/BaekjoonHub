#include <stdio.h>

int main(void)
{
	char s[101];
	int t;
	int a, b;
	int temp;
	
	scanf("%s", s);
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &a, &b);
		
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}
	
	printf("%s", s);
	
	return 0;
}