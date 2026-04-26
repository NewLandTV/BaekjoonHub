#include <stdio.h>

int main(void)
{
	int t;
	int n;
	int f;
	int sum = 0;
	
	scanf("%d", &t);
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%d", &f);
		
		sum += f;
	}
	
	printf("Padaeng_i %s", t <= sum ? "Happy" : "Cry");
	
	return 0;
}