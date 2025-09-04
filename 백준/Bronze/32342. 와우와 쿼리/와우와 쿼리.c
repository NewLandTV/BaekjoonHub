#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int q;
	char s[1001];
	int wow;
	
	scanf("%d", &q);
	
	while (q--)
	{
		scanf("%s", s);
		
		wow = 0;
		
		if (strlen(s) < 3)
		{
			printf("0\n");
			
			continue;
		}
		
		for (i = 0; i < strlen(s) - 2; i++)
		{
			if (s[i] == 'W' && s[i + 1] == 'O' && s[i + 2] == 'W')
			{
				wow++;
			}
		}
		
		printf("%d\n", wow);
	}
	
	return 0;
}