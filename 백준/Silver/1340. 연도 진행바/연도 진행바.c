#include <stdio.h>
#include <string.h>

#define IsLeap(year) ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

int main(void)
{
	int i;
	char month[10];
	int mon, day, year, hour, min;
	int md[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	double cur, tot;
	
	scanf("%s %d, %d %d:%d", month, &day, &year, &hour, &min);
	
	if (strcmp(month, "January") == 0)
	{
		mon = 1;
	}
	else if (strcmp(month, "February") == 0)
	{
		mon = 2;
	}
	else if (strcmp(month, "March") == 0)
	{
		mon = 3;
	}
	else if (strcmp(month, "April") == 0)
	{
		mon = 4;
	}
	else if (strcmp(month, "May") == 0)
	{
		mon = 5;
	}
	else if (strcmp(month, "June") == 0)
	{
		mon = 6;
	}
	else if (strcmp(month, "July") == 0)
	{
		mon = 7;
	}
	else if (strcmp(month, "August") == 0)
	{
		mon = 8;
	}
	else if (strcmp(month, "September") == 0)
	{
		mon = 9;
	}
	else if (strcmp(month, "October") == 0)
	{
		mon = 10;
	}
	else if (strcmp(month, "November") == 0)
	{
		mon = 11;
	}
	else
	{
		mon = 12;
	}
	
	if (IsLeap(year))
	{
		md[1]++;
	}
	
	for (i = 0; i < mon - 1; i++)
	{
		day += md[i];
	}
	
	cur = ((day - 1) * 1440 + hour * 60 + min) * 100;
	tot = (IsLeap(year) ? 366 : 365) * 1440;
	
	printf("%.10lf", cur / tot);
	
	return 0;
}