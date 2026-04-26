#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100000

int main(void)
{
	int i, j;
	int t;
	int n;
	int isPrime[MAX + 1], numSpecial[MAX + 1] = { 0, };
	int s;
	char buffer[7], p1[6], p2[6];
	int x, y;
	int isSpecial;
	
	for (i = 0; i <= MAX; isPrime[i++] = 1);
	
	for (isPrime[1] = 0, i = 2; i * i <= MAX; i++)
	{
		if (!isPrime[i])
		{
			continue;
		}
		
		for (j = i * i; j <= MAX; j += i)
		{
			isPrime[j] = 0;
		}
	}
	
	for (i = 1, s = 0; i <= MAX; numSpecial[i++] = s)
	{
		if (!isPrime[i + 1])
		{
			continue;
		}
		
		if (i < 10)
		{
			s++;
			
			continue;
		}
		
		sprintf(buffer, "%d", i);
		
		for (j = 1, isSpecial = 1; j < strlen(buffer); j++)
		{
			memset(p1, 0, sizeof(p1));
			memset(p2, 0, sizeof(p2));
			strncpy(p1, buffer, j);
			strcpy(p2, buffer + j);
			
			x = atoi(p1);
			y = atoi(p2);
			
			if (!isPrime[x * y + 1])
			{
				isSpecial = 0;
				
				break;
			}
		}
		
		if (isSpecial)
		{
			s++;
		}
	}
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		printf("%d\n", numSpecial[n]);
	}
	
	return 0;
}