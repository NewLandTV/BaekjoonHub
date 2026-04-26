#include <stdio.h>

int main(void)
{
	int i, j, l;
	int n;
	int k[1000], a[1000], b[1000], t[3], temp;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &k[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		t[0] = k[i];
		t[1] = a[i];
		t[2] = b[i];
		
		for (j = 2; j > 0; j--)
		{
			for (l = 0; l < j; l++)
			{
				if (t[l] >= t[l + 1])
				{
					continue;
				}
				
				temp = t[l];
				t[l] = t[l + 1];
				t[l + 1] = temp;
			}
		}
		
		printf("%d ", t[1]);
	}
	
	return 0;
}