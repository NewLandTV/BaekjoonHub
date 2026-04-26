#include <stdio.h>

int main(void)
{
	int sleepTime;
	int alarmTime;
	
	scanf("%d", &sleepTime);
	scanf("%d", &alarmTime);
	printf("%d", sleepTime >= 20 ? 24 - sleepTime + alarmTime : alarmTime - sleepTime);
	
	return 0;
}