#include <stdio.h>

int main(void)
{
	char s[7];
	
	while (1)
	{
		scanf("%s", s);
		
		if (s[0] == 'e')
		{
			break;
		}
		
		switch (s[0])
		{
			case 'a':
				printf("Panthera tigris\n");
				
				break;
			case 't':
				printf("Pinus densiflora\n");
				
				break;
			case 'f':
				printf("Forsythia koreana\n");
				
				break;
		}
	}
	
	return 0;
}