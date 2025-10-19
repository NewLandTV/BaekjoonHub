#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int t;
	int x1, y1, x2, y2, x3, y3, x4, y4;
	int lx, ly, rx, ry;
	int w, h;
	int s1, s2;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		
		s1 = (x2 - x1) * (y2 - y1);
		lx = Max(x1, x3);
		ly = Max(y1, y3);
		rx = Min(x2, x4);
		ry = Min(y2, y4);
		w = Max(rx - lx, 0);
		h = Max(ry - ly, 0);
		s2 = Max(w * h, 0);
		
		printf("%d\n", s1 - s2);
	}
	
	return 0;
}