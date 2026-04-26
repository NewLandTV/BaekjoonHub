#include <stdio.h>

int main(void)
{
	int antenna;
	int eyes;
	
	scanf("%d", &antenna);
	scanf("%d", &eyes);
	
	if (antenna >= 3 && eyes <= 4)
	{
		printf("TroyMartian\n");
	}
	if (antenna <= 6 && eyes >= 2)
	{
		printf("VladSaturnian\n");
	}
	if (antenna <= 2 && eyes <= 3)
	{
		printf("GraemeMercurian\n");
	}
	
	return 0;
}