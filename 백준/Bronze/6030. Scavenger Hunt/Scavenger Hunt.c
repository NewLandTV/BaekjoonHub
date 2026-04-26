#include <stdio.h>

int GetFactor(int* factor, int len);

int main(void)
{
	int i, j;
	int p, q;
	int pFactor[6000] = { 0, }, qFactor[6000] = { 0, };
	int pLen = 0, qLen = 0;
	
	scanf("%d %d", &p, &q);
	
	pLen = GetFactor(pFactor, p);
	qLen = GetFactor(qFactor, q);
	
	for (i = 0; i < pLen; i++)
	{
		for (j = 0; j < qLen; j++)
		{
			printf("%d %d\n", pFactor[i], qFactor[j]);
		}
	}
	
	return 0;
}

int GetFactor(int* factor, int len)
{
	int i;
	int size = 0;
	
	for (i = 1; i <= len; i++)
	{
		if (len % i == 0)
		{
			factor[size++] = i;
		}
	}
	
	return size;
}