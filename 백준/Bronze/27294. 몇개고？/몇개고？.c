#include <stdio.h>

int main(void)
{
	int t, s;
	
	scanf("%d %d", &t, &s);
	
	if (s == 1 || t < 12 || t > 16)
	{
		printf("280");
		
		return 0;
	}
	
	printf("320");
	
	return 0;
}