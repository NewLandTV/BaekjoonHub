#include <stdio.h>

int main(void)
{
	int n;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		puts(" @@@   @@@ ");
		puts("@   @ @   @");
		puts("@    @    @");
		puts("@         @");
		puts(" @       @ ");
		puts("  @     @  ");
		puts("   @   @   ");
		puts("    @ @    ");
		puts("     @     ");
	}
	
	return 0;
}