#include <stdio.h>

int monthDay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int GetYearDay(int year)
{
	return year / 4 - year / 100 + year / 400;
}

int IsLeap(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int GetMonthDay(int year, int month, int day)
{
	int i;
	int sum = day;
	
	for (i = 0; i < month - 1; i++)
	{
		if (i == 1 && IsLeap(year))
		{
			sum++;
		}
		
		sum += monthDay[i];
	}
	
	return sum;
}

int main(void)
{
	int y1, m1, d1;
	int y2, m2, d2;
	int a, b;
	int x;
	
	scanf("%d %d %d", &y1, &m1, &d1);
	scanf("%d %d %d", &y2, &m2, &d2);
	
	a = (y1 - 1) * 365 + GetYearDay(y1 - 1) + GetMonthDay(y1, m1, d1);
	b = (y2 - 1) * 365 + GetYearDay(y2 - 1) + GetMonthDay(y2, m2, d2);
	x = b - a;
	
	if (y2 - y1 > 1000 || (y2 - y1 == 1000 && m2 > m1) || (y2 - y1 == 1000 && m2 == m1 && d2 >= d1))
	{
		printf("gg");
	}
	else
	{
		printf("D-%d", x);
	}
	
	return 0;
}