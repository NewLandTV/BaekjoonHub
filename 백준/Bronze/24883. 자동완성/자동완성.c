#include <stdio.h>

int main(void)
{
	char a = getchar();
	
	if (a == 'N' || a == 'n')
	{
		printf("Naver D2");
		
		return 0;
	}
	
	printf("Naver Whale");
	
	return 0;
}