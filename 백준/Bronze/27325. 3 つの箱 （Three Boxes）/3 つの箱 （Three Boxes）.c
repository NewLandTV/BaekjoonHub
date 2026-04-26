#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char s[101];
	int idx = 0, cnt = 0;
	
	scanf("%d", &n);
	scanf("%s", s);
	
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'L')
		{
			idx--;
			
			if (idx < 0)
			{
				idx = 0;
			}
		}
		else
		{
			idx++;
			
			if (idx > 2)
			{
				idx = 2;
			}
		}
		
		if (idx == 2)
		{
			cnt++;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}