#include <stdio.h>

char RotateChar(char c);

int main(void)
{
	int i, j;
	int n, m;
	char a[100][101];
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", a[i]);
	}
	
	for (i = m - 1; i >= 0; i--)
	{
		for (j = 0; j < n; j++)
		{
			a[j][i] = RotateChar(a[j][i]);
			
			fputc(a[j][i], stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}

char RotateChar(char c)
{
	switch (c)
	{
		case '.':
			return '.';
		case 'O':
			return 'O';
		case '-':
			return '|';
		case '|':
			return '-';
		case '/':
			return '\\';
		case '\\':
			return '/';
		case '^':
			return '<';
		case '<':
			return 'v';
		case 'v':
			return '>';
		case '>':
			return '^';
	}
}