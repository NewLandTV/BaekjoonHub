#include <stdio.h>

int GetSqrDistance(int x1, int y1, int x2, int y2);

int main(void)
{
	int w, h, x, y, p;
	int px, py;
	int n = 0;
	
	scanf("%d %d %d %d %d", &w, &h, &x, &y, &p);
	
	while (p--)
	{
		scanf("%d %d", &px, &py);
		
		if (GetSqrDistance(px, py, x, y + (h >> 1)) <= (h >> 1) * (h >> 1) ||
			GetSqrDistance(px, py, x + w, y + (h >> 1)) <= (h >> 1) * (h >> 1) ||
			(x <= px && px <= x + w && y <= py && py <= y + h))
		{
			n++;
		}
	}
	
	printf("%d", n);
	
	return 0;
}

int GetSqrDistance(int x1, int y1, int x2, int y2)
{
	int dx = x2 - x1;
	int dy = y2 - y1;
	
	return dx * dx + dy * dy;
}