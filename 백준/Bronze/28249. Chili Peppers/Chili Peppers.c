#include <stdio.h>

int main(void)
{
	int n;
	char pn[9];
	int t = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", pn);
		
		switch (pn[0])
		{
			case 'P':
				t += 1500;
				
				break;
			case 'M':
				t += 6000;
				
				break;
			case 'S':
				t += 15500;
				
				break;
			case 'C':
				t += 40000;
				
				break;
			case 'T':
				t += 75000;
				
				break;
			case 'H':
				t += 125000;
				
				break;
		}
	}
	
	printf("%d", t);
	
	return 0;
}