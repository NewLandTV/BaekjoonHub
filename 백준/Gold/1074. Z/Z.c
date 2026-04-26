#include <stdio.h>

int Pow(int base, int exp);

int main(void)
{
	int n, r, c;
	int size, idx = 0;
	
	scanf("%d %d %d", &n, &r, &c);
	
	size = Pow(2, n);
	
	while (size > 1)
	{
		size >>= 1;
		
		if (r < size && c < size)
		{
			continue;
		}
		if (r < size && c >= size)
		{
			c -= size;
			idx += size * size;
		}
		if (r >= size && c < size)
		{
			r -= size;
			idx += size * size * 2;
		}
		if (r >= size && c >= size)
		{
			r -= size;
			c -= size;
			idx += size * size * 3;
		}
	}
	
	printf("%d", idx);
	
	return 0;
}

int Pow(int base, int exp)
{
	int x = 1;
	
	for (; exp; exp >>= 1, base = base * base)
	{
		if (exp & 1)
		{
			x *= base;
		}
	}
	
	return x;
}