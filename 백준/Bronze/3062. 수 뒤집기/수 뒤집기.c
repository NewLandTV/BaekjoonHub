#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int t;
	char n[7], temp;
	int a, b;
	int len;
	int equal;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%s", n);
		
		a = atoi(n);
		len = strlen(n);
		
		for (i = 0; i < len >> 1; i++)
		{
			temp = n[i];
			n[i] = n[len - 1 - i];
			n[len - 1 - i] = temp;
		}
		
		b = atoi(n);
		
		sprintf(n, "%d", a + b);
		
		len = strlen(n);
		equal = 1;
		
		for (i = 0; i < len >> 1; i++)
		{
			if (n[i] != n[len - 1 - i])
			{
				equal = 0;
				
				break;
			}
		}
		
		printf("%s\n", equal ? "YES" : "NO");
	}
	
	return 0;
}