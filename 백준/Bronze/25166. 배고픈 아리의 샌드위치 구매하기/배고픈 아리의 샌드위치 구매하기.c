#include <stdio.h>

int main(void)
{
	int i;
	int s, m;
	
	scanf("%d %d", &s, &m);
	
	if (s < 1024)
	{
		printf("No thanks");
		
		return 0;
	}
	
	s -= 1023;
	
	for (i = 0; i < 10; i++)
	{
		if (s & (1 << i) && m & (1 << i))
		{
			s -= m & (1 << i);
			m -= 1 << i;
		}
	}
	
	printf("%s", s == 0 ? "Thanks" : "Impossible");
	
	return 0;
}