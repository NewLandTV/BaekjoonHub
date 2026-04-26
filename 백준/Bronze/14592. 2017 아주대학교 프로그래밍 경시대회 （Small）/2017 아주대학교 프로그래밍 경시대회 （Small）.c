#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int ps, pc, pl;
	int s, c, l;
	int winner = 1;
	
	scanf("%d", &n);
	scanf("%d %d %d", &ps, &pc, &pl);
	
	for (i = 1; i < n; i++)
	{
		scanf("%d %d %d", &s, &c, &l);
		
		if (ps < s || ps == s && pc > c || ps == s && pc == c && pl > l)
		{
			ps = s;
			pc = c;
			pl = l;
			winner = i + 1;
		}
	}
	
	printf("%d", winner);
	
	return 0;
}