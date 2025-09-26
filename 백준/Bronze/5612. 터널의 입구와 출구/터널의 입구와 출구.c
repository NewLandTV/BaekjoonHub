#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int m;
	int in, out;
	int s;
	
	scanf("%d", &n);
	scanf("%d", &m);
	
	s = m;
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &in, &out);
		
		m += in - out;
		
		if (m < 0)
		{
			s = 0;
			
			break;
		}
		
		if (m >= s)
		{
			s = m;
		}
	}
	
	printf("%d", s);
	
	return 0;
}