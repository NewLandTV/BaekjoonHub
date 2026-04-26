#include <stdio.h>

int main(void)
{
	char date[11];
	int n;
	int y, m, d;
	
	scanf("%s", date);
	scanf("%d", &n);
	
	y = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + date[3] - '0';
	m = (date[5] - '0') * 10 + date[6] - '0';
	d = (date[8] - '0') * 10 + date[9] - '0' + n;
	
	for (; d > 30; m++, d -= 30);
	for (; m > 12; y++, m -= 12);
	
	printf("%d-%02d-%02d", y, m, d);
	
	return 0;
}