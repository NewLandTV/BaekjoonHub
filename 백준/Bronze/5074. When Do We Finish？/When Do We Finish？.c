#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char a[6], b[6];
	char* ptr;
	int d, h, m;
	
	while (1)
	{
		scanf(" %s %s", a, b);
		
		if (strcmp(a, "00:00") == 0 && strcmp(b, "00:00") == 0)
		{
			break;
		}
		
		ptr = strtok(a, ":");
		h = atoi(ptr);
		ptr = strtok(NULL, ":");
		m = atoi(ptr);
		
		ptr = strtok(b, ":");
		h += atoi(ptr);
		ptr = strtok(NULL, ":");
		m += atoi(ptr);
		
		h += m / 60;
		m %= 60;
		d = h / 24;
		h %= 24;
		
		printf("%02d:%02d", h, m);
		
		if (d != 0)
		{
			printf(" +%d", d);
		}
		
		printf("\n");
	}
	
	return 0;
}