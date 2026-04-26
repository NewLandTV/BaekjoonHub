#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char x[6];
	int c = 0;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%s", x);
		
		if (strlen(x) > 4)
		{
			continue;
		}
		
		if (strlen(x) == 4 && x[2] == '9' && x[3] > '0')
		{
			continue;
		}
		
		c++;
	}
	
	printf("%d", c);
	
	return 0;
}