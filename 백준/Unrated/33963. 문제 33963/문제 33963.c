#include <stdio.h>
#include <string.h>

int main(void)
{
	long long n;
	int l, len;
	char buffer[12];
	int count = 0;
	
	scanf("%lld", &n);
	sprintf(buffer, "%lld", n);
	
	l = len = strlen(buffer);
	
	while (l == len)
	{
		n <<= 1;
		
		sprintf(buffer, "%lld", n);
		
		len = strlen(buffer);
		count++;
	}
	
	printf("%d", count - 1);
	
	return 0;
}