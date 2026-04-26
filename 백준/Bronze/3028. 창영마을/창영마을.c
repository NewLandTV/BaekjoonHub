#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[51];
	int temp, a[3] = { 1, 0, 0 };
	
	scanf("%s", s);
	
	for (i = 0; i < strlen(s); i++)
	{
		switch (s[i])
		{
		case 'A':
			temp = a[0];
			a[0] = a[1];
			a[1] = temp;
			
			break;
		case 'B':
			temp = a[1];
			a[1] = a[2];
			a[2] = temp;
			
			break;
		case 'C':
			temp = a[0];
			a[0] = a[2];
			a[2] = temp;
			
			break;
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		if (a[i])
		{
			printf("%d", i + 1);
			
			break;
		}
	}
	
	return 0;
}