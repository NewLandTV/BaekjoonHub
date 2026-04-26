#include <stdio.h>
#include <string.h>

int main(void)
{
	int lv;
	char j[8];
	int score;
	
	scanf("%d %s", &lv, j);
	
	if (strcmp(j, "miss") == 0)
	{
		score = 0;
	}
	else if (strcmp(j, "bad") == 0)
	{
		score = lv * 200;
	}
	else if (strcmp(j, "cool") == 0)
	{
		score = lv * 400;
	}
	else if (strcmp(j, "great") == 0)
	{
		score = lv * 600;
	}
	else if (strcmp(j, "perfect") == 0)
	{
		score = lv * 1000;
	}
	
	printf("%d", score);
	
	return 0;
}