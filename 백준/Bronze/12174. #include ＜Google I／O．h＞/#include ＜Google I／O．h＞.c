#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int t;
	int x, b;
	char s[8001], buffer[9], y[1001];
	int ascii;
	
	scanf("%d", &t);
	
	for (x = 1; x <= t; x++)
	{
		scanf("%d", &b);
		scanf("%s", s);
		
		for (i = 0; i < b << 3; i++)
		{
			s[i] = s[i] == 'I' ? '1' : '0';
		}
		
		for (i = 0; i < b << 3; i += 8)
		{
			strncpy(buffer, &s[i], 8);
			
			buffer[8] = 0;
			ascii = strtol(buffer, NULL, 2);
			
			y[i >> 3] = ascii;
		}
		
		y[i >> 3] = 0;
		
		printf("Case #%d: %s\n", x, y);
	}
	
	return 0;
}