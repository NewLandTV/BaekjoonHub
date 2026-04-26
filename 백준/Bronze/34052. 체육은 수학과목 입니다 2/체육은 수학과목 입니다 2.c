#include <stdio.h>

int main(void)
{
	int i;
	int t = 0, ti;
	
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &ti);
		
		t += ti;
	}
	
	printf("%s", t <= 1500 ? "Yes" : "No");
	
	return 0;
}