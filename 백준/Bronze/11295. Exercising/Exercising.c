#include <stdio.h>

int main(void)
{
	int i;
	int l;
	int n;
	float d;
	int ped;
	
	for (i = 1; ; i++)
	{
		scanf("%d", &l);
		
		if (l == 0)
		{
			break;
		}
		
		d = (float)l / 100000;
		
		scanf("%d", &n);
		printf("User %d\n", i);
		
		while (n--)
		{
			scanf("%d", &ped);
			printf("%.5f\n", d * ped);
		}
	}
	
	return 0;
}