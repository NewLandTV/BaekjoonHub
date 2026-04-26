#include <stdio.h>

int main(void)
{
	int birthYear, birthMonth, birthDay;
	int year, month, day;
	int age;
	int koreanAge;
	int yearAge;
	
	scanf("%d %d %d", &birthYear, &birthMonth, &birthDay);
	scanf("%d %d %d", &year, &month, &day);
	
	age = year - birthYear - 1;
	
	if (month > birthMonth || month == birthMonth && day >= birthDay)
	{
		age++;
	}
	
	koreanAge = year - birthYear + 1;
	yearAge = year - birthYear;
	
	printf("%d\n", age);
	printf("%d\n", koreanAge);
	printf("%d", yearAge);
	
	return 0;
}