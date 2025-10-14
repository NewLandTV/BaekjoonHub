#include <stdio.h>

int main(void)
{
	int i;
	int t, s, h;
	int w;
	
	scanf("%d %d %d", &t, &s, &h);
	
	while (t--)
	{
		fputc('*', stdout);
		
		for (i = 0; i < s; i++)
		{
			fputc(' ', stdout);
		}
		
		fputc('*', stdout);
		
		for (i = 0; i < s; i++)
		{
			fputc(' ', stdout);
		}
		
		fputc('*', stdout);
		fputc('\n', stdout);
	}
	
	w = s * 2 + 3;
	
	for (i = 0; i < w; i++)
	{
		fputc('*', stdout);
	}
	
	fputc('\n', stdout);
	
	while (h--)
	{
		for (i = 0; i < w >> 1; i++)
		{
			fputc(' ', stdout);
		}
		
		fputc('*', stdout);
		fputc('\n', stdout);
	}
	
	return 0;
}