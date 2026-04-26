#include <stdio.h>

int main(void)
{
	int i;
	char c;
	int count[26] = { 0, };
	int max = 0;
	
	while ((c = getchar()) != -1)
	{
		if (c != 32)
		{
			count[c - 97]++;
		}
	}
	
	for (i = 0; i < 26; i++)
	{
		if (count[i] > max)
		{
			max = count[i];
		}
	}
	
	for (i = 0; i < 26; i++)
	{
		if (count[i] == max)
		{
			fputc(i + 97, stdout);
		}
	}
	
	return 0;
}