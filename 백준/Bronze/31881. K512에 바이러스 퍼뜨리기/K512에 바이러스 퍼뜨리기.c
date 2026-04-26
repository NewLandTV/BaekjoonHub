#include <stdio.h>

int main(void)
{
	int n, q;
	int query, x;
	int viralComputers[200000] = { 0, };
	int numberViralComputer = 0;
	
	scanf("%d %d", &n, &q);
	
	while (q--)
	{
		scanf("%d", &query);
		
		switch (query)
		{
			case 1:
				scanf("%d", &x);
				
				x--;
				
				if (viralComputers[x] == 0)
				{
					numberViralComputer++;
				}
				
				viralComputers[x] = 1;
				
				break;
			case 2:
				scanf("%d", &x);
				
				x--;
				
				if (viralComputers[x] == 1)
				{
					numberViralComputer--;
				}
				
				viralComputers[x] = 0;
				
				break;
			case 3:
				printf("%d\n", n - numberViralComputer);
				
				break;
		}
	}
	
	return 0;
}