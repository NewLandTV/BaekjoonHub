#include <stdio.h>
#include <string.h>

int StringToMonth(char* string);

int main(void)
{
	int day, month;
	char string[10];
	
	while (1)
	{
		scanf("%d %s", &day, string);
		
		if (day == 0)
		{
			break;
		}
		
		month = StringToMonth(string);
		
		if (month == 2 && day == 29)
		{
			printf("Unlucky\n");
			
			continue;
		}
		
		if (month == 8 && day == 4)
		{
			printf("Happy birthday\n");
			
			continue;
		}
		
		printf("%s\n", month > 8 || month == 8 && day > 4 ? "No" : "Yes");
	}
	
	return 0;
}

int StringToMonth(char* string)
{
	if (strcmp(string, "January") == 0)
	{
		return 1;
	}
	if (strcmp(string, "February") == 0)
	{
		return 2;
	}
	if (strcmp(string, "March") == 0)
	{
		return 3;
	}
	if (strcmp(string, "April") == 0)
	{
		return 4;
	}
	if (strcmp(string, "May") == 0)
	{
		return 5;
	}
	if (strcmp(string, "June") == 0)
	{
		return 6;
	}
	if (strcmp(string, "July") == 0)
	{
		return 7;
	}
	if (strcmp(string, "August") == 0)
	{
		return 8;
	}
	if (strcmp(string, "September") == 0)
	{
		return 9;
	}
	if (strcmp(string, "October") == 0)
	{
		return 10;
	}
	if (strcmp(string, "November") == 0)
	{
		return 11;
	}
	if (strcmp(string, "December") == 0)
	{
		return 12;
	}
	
	return -1;
}