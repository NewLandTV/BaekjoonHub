#include <stdio.h>

int main(void)
{
	char mbti[5];
	
	scanf("%s", mbti);
	
	if (mbti[0] == 'I')
	{
		printf("E");
	}
	else
	{
		printf("I");
	}
	
	if (mbti[1] == 'N')
	{
		printf("S");
	}
	else
	{
		printf("N");
	}
	
	if (mbti[2] == 'T')
	{
		printf("F");
	}
	else
	{
		printf("T");
	}
	
	if (mbti[3] == 'J')
	{
		printf("P");
	}
	else
	{
		printf("J");
	}
	
	return 0;
}