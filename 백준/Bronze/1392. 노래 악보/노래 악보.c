#include <stdio.h>

int main(void)
{
	int i;
	int n, q;
	int ns, qs;
	int score[101] = { 0, };
	
	scanf("%d %d", &n, &q);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &ns);
		
		score[i] = ns;
	}
	
	while (q--)
	{
		scanf("%d", &qs);
		
		for (i = 0; i < n; i++)
		{
			if (qs >= score[i])
			{
				qs -= score[i];
			}
			else
			{
				printf("%d\n", i + 1);
				
				break;
			}
		}
	}
	
	return 0;
}