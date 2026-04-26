#include <stdio.h>
#include <memory.h>

int main(void)
{
	int i;
	int n;
	char* s;
	
	scanf("%d", &n);
	
	s = (char*)malloc(n);
	
	scanf("%s", s);
	
	for (i = n - 5; i < n; i++)
	{
		fputc(s[i], stdout);
	}
	
	free(s);
	
	return 0;
}