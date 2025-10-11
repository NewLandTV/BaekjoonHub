#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int n;
	char answer[9];
	int l = 0, r = 11;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		scanf(" %[^\n]s", answer);
		
		switch (answer[4])
		{
			case 'h':
				r = Min(r, n);
				
				break;
			case 'l':
				l = Max(l, n);
				
				break;
			case 't':
				if (l < n && n < r)
				{
					printf("Stan may be honest\n");
				}
				else
				{
					printf("Stan is dishonest\n");
				}
				
				l = 0, r = 11;
				
				break;
		}
	}
	
	return 0;
}