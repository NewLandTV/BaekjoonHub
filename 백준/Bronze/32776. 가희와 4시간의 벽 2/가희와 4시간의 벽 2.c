#include <stdio.h>

int main(void)
{
	int s;
	int ma, f, mb;
	
	scanf("%d", &s);
	scanf("%d %d %d", &ma, &f, &mb);
	
	if (s <= ma + f + mb || s <= 240)
	{
		printf("high speed rail");
		
		return 0;
	}
	
	printf("flight");
	
	return 0;
}