#include <stdio.h>
#include <string.h> 

int main(void)
{
	int i;
	char n[11];
	int l;
	int cl;
	int a, b;
	
	scanf("%s", &n);
	
	l = strlen(n);
	
	if (l == 1)
	{
		printf("NO");
		
		return 0;
	}
	
	for (cl = 1; cl < l; cl++)
	{
		for (a = 1, i = 0; i < cl; i++)
		{
			a *= n[i] - '0';
		}
		
		for (b = 1, i = cl; i < l; i++)
		{
			b *= n[i] - '0';
		}
		
		if (a == b)
		{
			printf("YES");
			
			return 0;
		}
	}
	
	printf("NO");
	
	return 0;
}