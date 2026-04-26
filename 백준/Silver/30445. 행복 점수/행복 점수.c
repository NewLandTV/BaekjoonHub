#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int i, j;
	char s[1680], *happy = "HAPY", *sad = "SAD";
	int lh = strlen(happy), ls = strlen(sad);
	int ph = 0, pc = 0;
	
	scanf("%[^\n]s", s);
	
	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < lh; j++)
		{
			if (s[i] == happy[j])
			{
				ph++;
				
				break;
			}
		}
		for (j = 0; j < ls; j++)
		{
			if (s[i] == sad[j])
			{
				pc++;
				
				break;
			}
		}
	}
	
	if (ph == 0 && pc == 0)
	{
		printf("50.00");
	}
	else
	{
		printf("%.2lf", round((double)ph / (ph + pc) * 10000) * 0.01);
	}
	
	return 0;
}