#include <stdio.h>

typedef struct
{
	int x, y, z;
} Point;

int main(void)
{
	int i;
	int n, m;
	Point p[100000], q;
	int count;
	long long r, dx, dy, dz;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &p[i].x, &p[i].y, &p[i].z);
	}
	
	scanf("%d", &m);
	
	while (m--)
	{
		scanf("%d %d %d %lld", &q.x, &q.y, &q.z, &r);
		
		for (i = count = 0, r *= r; i < n; i++)
		{
			dx = p[i].x - q.x;
			dy = p[i].y - q.y;
			dz = p[i].z - q.z;
			
			if (dx * dx + dy * dy + dz * dz <= r)
			{
				count++;
			}
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}