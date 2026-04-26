#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t t = time(0);
	
	struct tm* timeStruct = gmtime(&t);
	
	int year = timeStruct->tm_year + 1900;
	char month = timeStruct->tm_mon + 1;
	char day = timeStruct->tm_mday;
	
	printf("%04d-%02d-%02d", year, month, day);
	
	return 0;
}