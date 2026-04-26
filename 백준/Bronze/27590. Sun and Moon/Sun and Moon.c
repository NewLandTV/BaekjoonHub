#include <stdio.h>

int main(void)
{
	int i;
	int ds, ys;
	int dm, ym;
	
	scanf("%d %d", &ds, &ys);
	scanf("%d %d", &dm, &ym);
	
	ds = ys - ds;
	dm = ym - dm;
	
	while (ds != dm)
	{
		if (ds < dm)
		{
			ds += ys;
			
			continue;
		}
		
		dm += ym;
	}
	
	printf("%d", ds);
	
	return 0;
}