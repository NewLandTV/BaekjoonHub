#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int n;
	char k[4], s[884] = { 0, };
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		sprintf(k, "%d", i);
		
		if (strstr(s, k) == NULL)
		{
			strcat(s, k);
		}
	}
	
	printf("%s", s);
	
	return 0;
}