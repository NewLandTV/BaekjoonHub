#include <stdio.h>

int main(void)
{
	int y;
	char* teamList[] =
	{
		"ITMO",
		"SPbSU",
		"SPbSU",
		"ITMO",
		"ITMO",
		"SPbSU",
		"ITMO",
		"ITMO",
		"ITMO",
		"ITMO",
		"ITMO",
		"PetrSU, ITMO",
		"SPbSU",
		"SPbSU",
		"ITMO",
		"ITMO",
		"ITMO",
		"ITMO",
		"SPbSU",
		"ITMO",
		"ITMO",
		"ITMO",
		"ITMO",
		"SPbSU",
		"ITMO"
	};
	
	scanf("%d", &y);
	printf("%s", teamList[y - 1995]);
	
	return 0;
}