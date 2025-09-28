#include <stdio.h>

int main(void)
{
	int p;
	int g, c, n;
	int member = 0, software = 0, embedded = 0, ai = 0, none = 0;
	
	scanf("%d", &p);
	
	while (p--)
	{
		scanf("%d %d %d", &g, &c, &n);
		
		if (g == 1)
		{
			none++;
			
			continue;
		}
		
		switch (c)
		{
			case 1:
			case 2:
				software++;
				
				break;
			case 3:
				embedded++;
				
				break;
			case 4:
				ai++;
				
				break;
		}
	}
	
	printf("%d\n", software);
	printf("%d\n", embedded);
	printf("%d\n", ai);
	printf("%d", none);
	
	return 0;
}