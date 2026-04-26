#include <stdio.h>

int main(void)
{
	int information, mathematic, science, english;
	int s;
	int t;
	
	scanf("%d %d %d %d", &information, &mathematic, &science, &english);
	
	s = information + mathematic + science + english;
	
	scanf("%d %d %d %d", &information, &mathematic, &science, &english);
	
	t = information + mathematic + science + english;
	
	printf("%d", s >= t ? s : t);
	
	return 0;
}