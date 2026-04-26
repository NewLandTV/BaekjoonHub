#include <stdio.h>
#include <string.h>

int GetColorValue(char* color);

int main(void)
{
	unsigned long long i;
	char color1[7];
	char color2[7];
	char color3[7];
	unsigned long long value;
	
	scanf("%s", color1);
	scanf("%s", color2);
	scanf("%s", color3);
	
	value = GetColorValue(color1) * 10;
	value += GetColorValue(color2);
	
	for (i = 0; i < GetColorValue(color3); i++)
	{
		value *= 10;
	}
	
	printf("%lld", value);
	
	return 0;
}

int GetColorValue(char* color)
{
	if (strcmp(color, "black") == 0)
	{
		return 0;
	}
	else if (strcmp(color, "brown") == 0)
	{
		return 1;
	}
	else if (strcmp(color, "red") == 0)
	{
		return 2;
	}
	else if (strcmp(color, "orange") == 0)
	{
		return 3;
	}
	else if (strcmp(color, "yellow") == 0)
	{
		return 4;
	}
	else if (strcmp(color, "green") == 0)
	{
		return 5;
	}
	else if (strcmp(color, "blue") == 0)
	{
		return 6;
	}
	else if (strcmp(color, "violet") == 0)
	{
		return 7;
	}
	else if (strcmp(color, "grey") == 0)
	{
		return 8;
	}
	else if (strcmp(color, "white") == 0)
	{
		return 9;
	}
}