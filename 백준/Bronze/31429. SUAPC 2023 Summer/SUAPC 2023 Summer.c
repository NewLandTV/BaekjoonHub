#include <stdio.h>

int main(void)
{
	int n;
	int counts[11] = { 12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6 };
	int penalties[11] = { 1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773 };
	
	scanf("%d", &n);
	printf("%d %d", counts[n - 1], penalties[n - 1]);
	
	return 0;
}