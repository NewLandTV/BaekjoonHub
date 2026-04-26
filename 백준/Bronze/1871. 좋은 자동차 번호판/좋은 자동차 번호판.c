#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
	int n;
	char car[101];
	int l, d;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", car);
		
		l = (car[0] - 'A') * 676 + (car[1] - 'A') * 26 + car[2] - 'A';
		d = (car[4] - '0') * 1000 + (car[5] - '0') * 100 + (car[6] - '0') * 10 + car[7] - '0';
		
		printf("%snice\n", Abs(l - d) <= 100 ? "" : "not ");
	}
	
	return 0;
}