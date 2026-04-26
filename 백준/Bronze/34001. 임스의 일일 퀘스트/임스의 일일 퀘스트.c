#include <stdio.h>

int main(void)
{
	int i, j;
	int l;
	int arcaneLevels[6][3] =
	{
		{ 200, 210, 220 },
		{ 210, 220, 225 },
		{ 220, 225, 230 },
		{ 225, 230, 235 },
		{ 230, 235, 245 },
		{ 235, 245, 250 }
	};
	int grandisLevel = 260;
	int monster, monsters[3] = { 500, 300, 100 };
	int startLevel, level;
	
	scanf("%d", &l);
	
	for (i = 0; i < 6; i++)
	{
		monster = 0;
		
		for (j = 0; j < 3; j++)
		{
			if (arcaneLevels[i][j] <= l)
			{
				monster = monsters[j];
			}
		}
		
		printf("%d ", monster);
	}
	
	printf("\n");
	
	for (i = 0; i < 7; i++)
	{
		startLevel = grandisLevel + i * 5;
		monster = 0;
		
		for (j = 0; j < 3; j++)
		{
			level = startLevel + j * 5;
			
			if (level <= l)
			{
				monster = monsters[j];
			}
		}
		
		printf("%d ", monster);
	}
	
	return 0;
}