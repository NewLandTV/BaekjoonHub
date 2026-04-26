#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int StrToSec(char* s);
void PrintTime(int t);

int main(void)
{
	char s[9], e[9];
	int a, b, t;
	
	scanf("%s", s);
	scanf("%s", e);
	
	a = StrToSec(s);
	b = StrToSec(e);
	t = b - a;
	
	if (a > b)
	{
		t += 86400;
	}
	
	PrintTime(t);
	
	return 0;
}

int StrToSec(char* s)
{
	char* ptr = strtok(s, ":");
	int sec = atoi(ptr) * 3600;
	
	ptr = strtok(NULL, ":");
	sec += atoi(ptr) * 60;
	ptr = strtok(NULL, ":");
	
	return sec + atoi(ptr);
}

void PrintTime(int t)
{
	int hour = t / 3600;
	
	t %= 3600;
	
	printf("%02d:%02d:%02d", hour, t / 60, t % 60);
}