#include <stdio.h>
#include <string.h>

char Decode(char* morse);

int main(void)
{
	int n;
	char m[7];
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", m);
		printf("%c", Decode(m));
	}
	
	return 0;
}

char Decode(char* morse)
{
	if (strcmp(morse, ".-") == 0)
	{
		return 'A';
	}
	else if (strcmp(morse, "-...") == 0)
	{
		return 'B';
	}
	else if (strcmp(morse, "-.-.") == 0)
	{
		return 'C';
	}
	else if (strcmp(morse, "-..") == 0)
	{
		return 'D';
	}
	else if (strcmp(morse, ".") == 0)
	{
		return 'E';
	}
	else if (strcmp(morse, "..-.") == 0)
	{
		return 'F';
	}
	else if (strcmp(morse, "--.") == 0)
	{
		return 'G';
	}
	else if (strcmp(morse, "....") == 0)
	{
		return 'H';
	}
	else if (strcmp(morse, "..") == 0)
	{
		return 'I';
	}
	else if (strcmp(morse, ".---") == 0)
	{
		return 'J';
	}
	else if (strcmp(morse, "-.-") == 0)
	{
		return 'K';
	}
	else if (strcmp(morse, ".-..") == 0)
	{
		return 'L';
	}
	else if (strcmp(morse, "--") == 0)
	{
		return 'M';
	}
	else if (strcmp(morse, "-.") == 0)
	{
		return 'N';
	}
	else if (strcmp(morse, "---") == 0)
	{
		return 'O';
	}
	else if (strcmp(morse, ".--.") == 0)
	{
		return 'P';
	}
	else if (strcmp(morse, "--.-") == 0)
	{
		return 'Q';
	}
	else if (strcmp(morse, ".-.") == 0)
	{
		return 'R';
	}
	else if (strcmp(morse, "...") == 0)
	{
		return 'S';
	}
	else if (strcmp(morse, "-") == 0)
	{
		return 'T';
	}
	else if (strcmp(morse, "..-") == 0)
	{
		return 'U';
	}
	else if (strcmp(morse, "...-") == 0)
	{
		return 'V';
	}
	else if (strcmp(morse, ".--") == 0)
	{
		return 'W';
	}
	else if (strcmp(morse, "-..-") == 0)
	{
		return 'X';
	}
	else if (strcmp(morse, "-.--") == 0)
	{
		return 'Y';
	}
	else if (strcmp(morse, "--..") == 0)
	{
		return 'Z';
	}
	else if (strcmp(morse, ".----") == 0)
	{
		return '1';
	}
	else if (strcmp(morse, "..---") == 0)
	{
		return '2';
	}
	else if (strcmp(morse, "...--") == 0)
	{
		return '3';
	}
	else if (strcmp(morse, "....-") == 0)
	{
		return '4';
	}
	else if (strcmp(morse, ".....") == 0)
	{
		return '5';
	}
	else if (strcmp(morse, "-....") == 0)
	{
		return '6';
	}
	else if (strcmp(morse, "--...") == 0)
	{
		return '7';
	}
	else if (strcmp(morse, "---..") == 0)
	{
		return '8';
	}
	else if (strcmp(morse, "----.") == 0)
	{
		return '9';
	}
	else if (strcmp(morse, "-----") == 0)
	{
		return '0';
	}
	else if (strcmp(morse, "--..--") == 0)
	{
		return ',';
	}
	else if (strcmp(morse, ".-.-.-") == 0)
	{
		return '.';
	}
	else if (strcmp(morse, "..--..") == 0)
	{
		return '?';
	}
	else if (strcmp(morse, "---...") == 0)
	{
		return ':';
	}
	else if (strcmp(morse, "-....-") == 0)
	{
		return '-';
	}
	else if (strcmp(morse, ".--.-.") == 0)
	{
		return '@';
	}
}