#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int CompareSquare(int w1, int h1, int w2, int h2);

int main(void)
{
	int i, j;
	int n;
	int x1, y1, x2, y2;
	int w[10000], h[10000];
	int count = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		
		w[i] = x2 - x1;
		h[i] = y2 - y1;
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (CompareSquare(w[i], h[i], w[j], h[j]) && CompareSquare(w[j], h[j], w[i], h[i]))
			{
				count++;
			}
		}
	}
	
	printf("%d", count);
	
	return 0;
}

int CompareSquare(int w1, int h1, int w2, int h2)
{
	int a1 = Min(w1, h1), a2 = Max(w1, h1);
	int b1 = Min(w2, h2), b2 = Max(w2, h2);
	
	return a1 > b1 || a2 > b2;
}