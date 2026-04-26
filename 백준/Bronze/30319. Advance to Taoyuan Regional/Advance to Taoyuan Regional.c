#include <stdio.h>

int Pow(int base, int exp);
int ParseInt(char* s, int start, int end);

int main(void)
{
	char date[11];
	int month, day;
	
	scanf("%s", date);
	
	month = ParseInt(date, 5, 6);
	day = ParseInt(date, 8, 9);
	
	if (month < 9 || (month == 9 && day <= 16))
	{
		printf("GOOD");
	}
	else
	{
		printf("TOO LATE");
	}
	
	return 0;
}

int Pow(int base, int exp)
{
	if (exp == 0)
	{
		return 1;
	}
	
	int result = 1;
	
	for (; exp; exp >>= 1, base *= base)
	{
		if (exp & 1)
		{
			result *= base;
		}
	}
	
	return result;
}

int ParseInt(char* s, int start, int end)
{
	int i;
	int digit = 0;
	int result = 0;
	
	for (i = end; i >= start; i--, digit++)
	{
		result += (s[i] - '0') * Pow(10, digit);
	}
	
	return result;
}