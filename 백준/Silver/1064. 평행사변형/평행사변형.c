#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	int xa, ya, xb, yb, xc, yc;
	double ab, bc, ac;
	double max = 0, min = 40000;
	double v[3];
	
	scanf("%d %d %d %d %d %d", &xa, &ya, &xb, &yb, &xc, &yc);
	
	if ((xa - xb) * (ya - yc) == (xa - xc) * (ya - yb))
	{
		printf("-1.0");
		
		return 0;
	}
	
	ab = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
	ac = sqrt(pow(xa - xc, 2) + pow(ya - yc, 2));
	bc = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2));
	v[0] = ab + ac;
	v[1] = ab + bc;
	v[2] = ac + bc;
	
	for (i = 0; i < 3; i++)
	{
		if (v[i] > max)
		{
			max = v[i];
		}
		if (v[i] < min)
		{
			min = v[i];
		}
	}
	
	printf("%.9lf", (max - min) * 2);
	
	return 0;
}