#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i, j;
	char s[21];
	int n;
	char team[50][21];
	int p[50], max = 0, idx = 0;
	int l = 0, o = 0, v = 0, e = 0;
	int tl, to, tv, te;
	
	scanf("%s", s);
	
	for (i = 0; i < strlen(s); i++)
	{
		switch (s[i])
		{
			case 'L':
				l++;
				
				break;
			case 'O':
				o++;
				
				break;
			case 'V':
				v++;
				
				break;
			case 'E':
				e++;
				
				break;
		}
	}
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", team[i]);
	}
	
	qsort(team, n, 21, Compare);
	
	for (i = 0; i < n; i++)
	{
		for (j = tl = to = tv = te = 0; j < strlen(team[i]); j++)
		{
			switch (team[i][j])
			{
				case 'L':
					tl++;
					
					break;
				case 'O':
					to++;
					
					break;
				case 'V':
					tv++;
					
					break;
				case 'E':
					te++;
					
					break;
			}
		}
		
		tl += l;
		to += o;
		tv += v;
		te += e;
		p[i] = ((tl + to) * (tl + tv) * (tl + te) * (to + tv) * (to + te) * (tv + te)) % 100;
	}
	
	for (i = 0; i < n; i++)
	{
		if (p[i] > max)
		{
			max = p[i];
			idx = i;
		}
	}
	
	printf("%s", team[idx]);
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	return strcmp((char*)a, (char*)b);
}