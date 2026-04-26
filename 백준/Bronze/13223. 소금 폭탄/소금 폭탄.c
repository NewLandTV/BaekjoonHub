#include <stdio.h>

int main(void)
{
	int h1, m1, s1;
	int h2, m2, s2;
	int t1, t2, t3;
	
	scanf("%d:%d:%d", &h1, &m1, &s1);
	scanf("%d:%d:%d", &h2, &m2, &s2);
	
	t1 = h1 * 3600 + m1 * 60 + s1;
	t2 = h2 * 3600 + m2 * 60 + s2;
	
	if (t1 == t2)
	{
		printf("24:00:00");
		
		return 0;
	}
	
	if (t1 > t2)
	{
		t1 -= 86400;
	}
	
	t3 = t2 - t1;
	
	printf("%02d:%02d:%02d", t3 / 3600, (t3 % 3600) / 60, (t3 % 3600) % 60);
	
	return 0;
}