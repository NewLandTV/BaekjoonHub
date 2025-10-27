#include <stdio.h>

int main(void)
{
	int t;
	int rifle, vision, hearing, arm, leg;
	float total;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d %d %d %d", &rifle, &vision, &hearing, &arm, &leg);
		
		total = rifle * 350.34f + vision * 230.9f + hearing * 190.55f + arm * 125.3f + leg * 180.9f;
		
		printf("$%.2f\n", total);
	}
	
	return 0;
}