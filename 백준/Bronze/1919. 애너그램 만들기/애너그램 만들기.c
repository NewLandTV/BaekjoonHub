#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s1[1001];
	char s2[1001];
	int alphabet1[26] = { 0, };
	int alphabet2[26] = { 0, };
	int count = 0;
	
	scanf("%s", s1);
	
	for (i = 0; i < strlen(s1); i++)
	{
		alphabet1[s1[i] - 'a']++;
	}
	
	scanf("%s", s2);
	
	for (i = 0; i < strlen(s2); i++)
	{
		alphabet2[s2[i] - 'a']++;
	}
	
	for (i = 0; i < 26; i++)
	{
		while (alphabet1[i] > 0 && alphabet2[i] > 0)
		{
			alphabet1[i]--;
			alphabet2[i]--;
		}
		
		count += alphabet1[i] + alphabet2[i];
	}
	
	printf("%d", count);
	
	return 0;
}