#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int t;
	char w[101];
	int count;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%s", w);
		
		for (i = count = 0; i < strlen(w); i++)
		{
			if (w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u')
			{
				count++;
			}
		}
		
		printf("The number of vowels in %s is %d.\n", w, count);
	}
	
	return 0;
}