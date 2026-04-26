#include <stdio.h>

#define MAX_LEN 1000001

#define Max(a, b) ((a) > (b) ? (a) : (b))

char buffer[MAX_LEN * 2 - 1];

int main(void)
{
	int i, j;
	char a[MAX_LEN];
	char b[MAX_LEN];
	int x[26] = { 0, }, y[26] = { 0, };
	int l = 0;
	char c;
	
	fscanf(stdin, "%s", a);
	fscanf(stdin, "%s", b);
	
	for (i = 0; a[i]; i++)
	{
		x[a[i] - 'a']++;
	}
	
	for (i = 0; b[i]; i++)
	{
		y[b[i] - 'a']++;
	}
	
	for (i = 0; i < 26; i++)
	{
		for (j = Max(x[i], y[i]), c = 'a' + i; j--;)
		{
			buffer[l++] = c;
		}
	}
	
	fwrite(buffer, 1, l, stdout);
	
	return 0;
}