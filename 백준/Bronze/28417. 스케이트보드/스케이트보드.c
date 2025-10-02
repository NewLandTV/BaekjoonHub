#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i, j;
	int n;
	int ra, rb, mr;
	int s[5], ms;
	int temp;
	int m = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &ra, &rb);
		
		mr = Max(ra, rb);
		
		for (i = 0; i < 5; i++)
		{
			scanf("%d", &s[i]);
		}
		
		for (i = 0; i < 4; i++)
		{
			for (j = 1; j < 5 - i; j++)
			{
				if (s[j - 1] > s[j])
				{
					temp = s[j - 1];
					s[j - 1] = s[j];
					s[j] = temp;
				}
			}
		}
		
		temp = mr + s[3] + s[4];
		
		if (temp > m)
		{
			m = temp;
		}
	}
	
	printf("%d", m);
	
	return 0;
}