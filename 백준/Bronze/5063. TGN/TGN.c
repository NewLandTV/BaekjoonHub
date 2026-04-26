#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int r, e, c;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &r, &e, &c);
		
		if (r == e - c)
		{
			printf("does not matter\n");
			
			continue;
		}
		
		printf("%s\n", r < e - c ? "advertise" : "do not advertise");
	}
	
	return 0;
}