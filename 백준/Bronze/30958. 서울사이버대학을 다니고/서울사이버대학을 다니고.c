#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char c;
	int alpha[26] = { 0, };
	int max = 1;
	
	scanf("%d", &n);
	getchar();
	
	for (i = 0; i < n; i++)
	{
		scanf("%c", &c);
		
		if (c == ' ' || c == ',' || c == '.')
		{
			continue;
		}
		
		alpha[c - 'a']++;
	}
	
	for (i = 0; i < 26; i++)
	{
		if (max < alpha[i])
		{
			max = alpha[i];
		}
	}
	
	printf("%d", max);
	
	return 0;
}