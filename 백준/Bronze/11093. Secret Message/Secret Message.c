#include <stdio.h>
#include <math.h>
#include <string.h>

int GetNearestSquare(int n);

int main(void)
{
	int i, j;
	int n;
	char l[10001];
	int m, sqrtM;
	int index;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", l);
		
		m = GetNearestSquare(strlen(l));
		sqrtM = sqrt(m);
		
		for (i = 0; i < sqrtM; i++)
		{
			for (j = 0; j < sqrtM; j++)
			{
				index = i + m - sqrtM * (j + 1);
				
				if (l[index] == NULL)
				{
					continue;
				}
				
				printf("%c", l[index]);
			}
		}
		
		printf("\n");
	}
	
	return 0;
}

int GetNearestSquare(int n)
{
	int sqrtN = sqrt(n);
	int square1 = sqrtN * sqrtN;
	int square2 = (sqrtN + 1) * (sqrtN + 1);
	
	if (n - square1 <= square2 - n)
	{
		return square1;
	}
	
	return square2;
}