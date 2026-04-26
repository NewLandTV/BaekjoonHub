#include <stdio.h>

int main(void)
{
	int i, j;
	char s[9];
	int w = 0, b = 0;
	
	for (i = 0; i < 8; i++)
	{
		scanf("%s", s);
		
		for (j = 0; j < 8; j++)
		{
			switch (s[j])
			{
				case 'P':
					w++;
					
					break;
				case 'N':
				case 'B':
					w += 3;
					
					break;
				case 'R':
					w += 5;
					
					break;
				case 'Q':
					w += 9;
					
					break;
				case 'p':
					b++;
					
					break;
				case 'n':
				case 'b':
					b += 3;
					
					break;
				case 'r':
					b += 5;
					
					break;
				case 'q':
					b += 9;
					
					break;
				default:
					break;
			}
		}
	}
	
	printf("%d", w - b);
	
	return 0;
}