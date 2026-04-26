#include <stdio.h>
#include <math.h>

int main(void)
{
	int t;
	int n;
	char dir[3];
	int l;
	double x, y;
	int d;
	
	scanf("%d", &t);
	
	while (t--)
	{
		x = y = d = 0;
		
		scanf("%d", &n);
		
		while (n--)
		{
			scanf("%s %d", dir, &l);
			
			switch (dir[0])
			{
			case 'f':
				x += l * cos(d * M_PI / 180);
				y += l * sin(d * M_PI / 180);
				
				break;
			case 'b':
				x -= l * cos(d * M_PI / 180);
				y -= l * sin(d * M_PI / 180);
				
				break;
			case 'l':
				d += l;
				
				break;
			case 'r':
				d -= l;
				
				break;
			}
		}
		
		printf("%.2lf\n", round(sqrt(x * x + y * y)));
	}
	
	return 0;
}