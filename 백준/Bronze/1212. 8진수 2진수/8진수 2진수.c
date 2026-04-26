#include <stdio.h>

int main(void)
{
	int i;
	char octal[333335];
	int length;
	char first[8][4] = { "", "1",  "10", "11", "100", "101", "110", "111" };
	char table[8][4] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	
	scanf("%s", octal);
	
	length = strlen(octal);
	
	if (octal[0] == '0')
	{
		printf("0");
		
		return 0;
	}
	
	printf("%s", first[octal[0] - '0']);
	
	for (i = 1; i < length; i++)
	{
		printf("%s", table[octal[i] - '0']);
	}
	
	return 0;
}