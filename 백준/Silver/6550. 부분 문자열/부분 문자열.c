#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[100001], t[100001];
	int sLen, tLen;
	int c;
	
	while (1)
	{
		if (scanf("%s %s", s, t) == EOF)
		{
			break;
		}
		
		sLen = strlen(s);
		tLen = strlen(t);
		
		for (i = 0, c = 0; i < tLen && c < sLen; i++)
		{
			if (s[c] == t[i])
			{
				c++;
			}
		}
		
		printf("%s\n", sLen == c ? "Yes" : "No");
	}
	
	return 0;
}