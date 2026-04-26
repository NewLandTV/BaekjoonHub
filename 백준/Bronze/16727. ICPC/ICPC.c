#include <stdio.h>

int main(void)
{
	int p1, s1;
	int s2, p2;
	int p, s;
	
	scanf("%d %d", &p1, &s1);
	scanf("%d %d", &s2, &p2);
	
	p = p1 + p2;
	s = s1 + s2;
	
	if (p > s)
	{
		printf("Persepolis");
		
		return 0;
	}
	else if (p < s)
	{
		printf("Esteghlal");
		
		return 0;
	}
	
	if (p1 < s2)
	{
		printf("Persepolis");
		
		return 0;
	}
	
	if (p1 > s2)
	{
		printf("Esteghlal");
		
		return 0;
	}
	
	printf("Penalty");
	
	return 0;
}