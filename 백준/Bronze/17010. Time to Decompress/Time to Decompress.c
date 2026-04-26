#include <stdio.h>

int main(void)
{
	int l;
	int n;
	char x;
	
	scanf("%d", &l);
	
	for (; l > 0; l--)
	{
		scanf("%d %c", &n, &x);
		
		for (; n > 0; n--)
		{
			fputc(x, stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}