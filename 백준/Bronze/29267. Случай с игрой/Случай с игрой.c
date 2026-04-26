#include <stdio.h>

int main(void)
{
	int n, k;
	char cmd[6];
	int a = 0, p = 0;
	
	scanf("%d %d", &n, &k);
	
	while (n--)
	{
		scanf("%s", cmd);
		
		switch (cmd[1])
		{
			case 'a':
				p = a;
				
				break;
			case 'o':
				a = p;
				
				break;
			case 'h':
				a--;
				
				break;
			case 'm':
				a += k;
				
				break;
		}
		
		printf("%d\n", a);
	}
	
	return 0;
}