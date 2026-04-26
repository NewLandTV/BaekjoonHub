#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char k[19];
	int d;
	
	scanf("%s", k);
	
	for (i = 0; i < strlen(k) - 1; i++)
	{
		if (i == 0)
		{
			d = k[i] - k[i + 1];
			
			continue;
		}
		
		if (k[i] - k[i + 1] != d)
		{
			printf("흥칫뿡!! <(￣ ﹌ ￣)>");
			
			return 0;
		}
	}
	
	printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!");
	
	return 0;
}