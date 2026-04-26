#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char a[8], b[8];
	int aLen, bLen;
	char minA[8], maxA[8];
	int minAInt, maxAInt;
	char minB[8], maxB[8];
	int minBInt, maxBInt;
	
	scanf("%s %s", a, b);
	
	aLen = strlen(a);
	bLen = strlen(b);
	
	for (i = 0; i < aLen; i++)
	{
		if (a[i] == '5' || a[i] == '6')
		{
			minA[i] = '5';
			maxA[i] = '6';
		}
		else
		{
			minA[i] = maxA[i] = a[i];
		}
	}
	
	minAInt = atoi(minA);
	maxAInt = atoi(maxA);
	
	for (i = 0; i < bLen; i++)
	{
		if (b[i] == '5' || b[i] == '6')
		{
			minB[i] = '5';
			maxB[i] = '6';
		}
		else
		{
			minB[i] = maxB[i] = b[i];
		}
	}
	
	minBInt = atoi(minB);
	maxBInt = atoi(maxB);
	
	printf("%d %d", minAInt + minBInt, maxAInt + maxBInt);
	
	return 0;
}