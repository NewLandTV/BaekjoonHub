#include <stdio.h>

int main(void)
{
	int beer, malt, wineProducts, carbonatedSoftDrinks, seltzer, water;
	int bottleBills;
	
	scanf("%d %d %d %d %d %d", &beer, &malt, &wineProducts, &carbonatedSoftDrinks, &seltzer, &water);
	
	bottleBills = beer * 5 + malt * 5 + wineProducts * 5 + carbonatedSoftDrinks * 5 + seltzer * 5 + water * 5;
	
	printf("%d", bottleBills);
	
	return 0;
}