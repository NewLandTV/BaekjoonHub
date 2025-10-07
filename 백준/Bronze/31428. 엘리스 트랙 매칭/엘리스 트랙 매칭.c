#include <stdio.h>

int main(void)
{
	int n;
	int info[4] = { 0, };
	char in;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf(" %c", &in);
		
		switch (in)
		{
			case 'C':
				info[0]++;
				
				break;
			case 'S':
				info[1]++;
				
				break;
			case 'I':
				info[2]++;
				
				break;
			case 'A':
				info[3]++;
				
				break;
		}
	}
	
	scanf(" %c", &in);
	
	switch (in)
	{
		case 'C':
			printf("%d", info[0]);
			
			break;
		case 'S':
			printf("%d", info[1]);
			
			break;
		case 'I':
			printf("%d", info[2]);
			
			break;
		case 'A':
			printf("%d", info[3]);
			
			break;
	}
	
	return 0;
}