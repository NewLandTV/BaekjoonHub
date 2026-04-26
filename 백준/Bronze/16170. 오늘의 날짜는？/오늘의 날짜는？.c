#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t t = time(0);
	
	struct tm* tiemStruct = gmtime(&t);
	
	printf("%04d\n", tiemStruct->tm_year + 1900);
	printf("%02d\n", tiemStruct->tm_mon + 1);
	printf("%02d", tiemStruct->tm_mday);
	
	return 0;
}