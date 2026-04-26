#include <stdio.h>

int GetHash(int length, char* str);

int main(void)
{
	int l;
	char str[51];
	int hash;
	
	scanf("%d", &l);
	scanf("%s", str);
	
	hash = GetHash(l, str);
	
	printf("%d", hash);
	
	return 0;
}

int GetHash(int length, char* str)
{
	const int M = 1234567891;
	const int R = 31;
	int i;
	unsigned long long r = 1, result = 0;
	
	for (i = 0; i < length; i++)
	{
		result += (str[i] - 96) * r % M;
		result %= M;
		r = (r * R) % M;
	}
	
	return result % M;
}