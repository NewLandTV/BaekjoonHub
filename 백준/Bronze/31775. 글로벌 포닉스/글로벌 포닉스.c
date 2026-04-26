#include <stdio.h>

int main(void)
{
	char s1[21];
	char s2[21];
	char s3[21];
	
	scanf("%s", s1);
	scanf("%s", s2);
	scanf("%s", s3);
	
	switch (s1[0])
	{
	case 'l':
		if (s2[0] == 'k' && s3[0] == 'p' || s2[0] == 'p' && s3[0] == 'k')
		{
			printf("GLOBAL");
			
			return 0;
		}
		
		break;
	case 'k':
		if (s2[0] == 'l' && s3[0] == 'p' || s2[0] == 'p' && s3[0] == 'l')
		{
			printf("GLOBAL");
			
			return 0;
		}
		
		break;
	case 'p':
		if (s2[0] == 'l' && s3[0] == 'k' || s2[0] == 'k' && s3[0] == 'l')
		{
			printf("GLOBAL");
			
			return 0;
		}
		
		break;
	}
	
	printf("PONIX");
	
	return 0;
}