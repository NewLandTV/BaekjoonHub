#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int l;
	int s;
	char binary[1000001];
	
	scanf("%s", binary);
	
	s = (l = strlen(binary)) % 3;
	
	s == 1 ? fputc(binary[0], stdout) : s == 2 ? fputc((binary[0] - 48) * 2 + binary[1], stdout) : 0;
	
	for (i = s; i < l; i += 3)
	{
		fputc((binary[i] - 48) * 4 + (binary[i + 1] - 48) * 2 + binary[i + 2], stdout);
	}
	
	return 0;
}