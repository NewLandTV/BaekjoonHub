#include <stdio.h>

int main(void)
{
	int i;
	char card[17];
	int n, sum = 0;
	
	scanf("%s", card);
	
	for (i = 0; i < 16; i++)
	{
		if (i & 1)
		{
			sum += card[i] - '0';
			
			continue;
		}
		
		n = (card[i] - '0') * 2;
		
		if (n >= 10)
		{
			n = n / 10 + n % 10;
		}
		
		sum += n;
	}
	
	printf("%s", sum % 10 == 0 ? "DA" : "NE");
	
	return 0;
}