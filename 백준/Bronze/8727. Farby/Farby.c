#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	int c, z, n;
	int p[6];
	double r, y, b;
	double results[3];
	
	scanf("%d %d %d", &c, &z, &n);
	
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &p[i]);
	}
	
	r = p[4] + p[3] * 0.5 + p[5] * 0.5;
	y = p[0] + p[1] * 0.5 + p[5] * 0.5;
	b = p[2] + p[1] * 0.5 + p[3] * 0.5;
	
	results[0] = Max(r - c, 0.0);
	results[1] = Max(y - z, 0.0);
	results[2] = Max(b - n, 0.0);
	
	for (i = 0; i < 3; i++)
	{
		if (results[i] == (int)results[i])
		{
			printf("%d ", (int)results[i]);
		}
		else
		{
			printf("%.1f ", results[i]);
		}
	}
	
	return 0;
}