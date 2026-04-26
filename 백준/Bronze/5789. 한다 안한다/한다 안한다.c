#include <stdio.h>

int main(void)
{
	int n;
	int l;
	char s[1001];
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%s", s);
		
		for (l = 0; s[l]; l++);
		
		l >>= 1;
		
		printf("Do-it");
		
		if (s[l - 1] == s[l])
		{
			printf("\n");
			
			continue;
		}
		
		printf("-Not\n");
	}
	
	return 0;
}