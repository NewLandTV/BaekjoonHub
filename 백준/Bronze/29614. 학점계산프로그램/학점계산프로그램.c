#include <stdio.h>

int main(void)
{
	int i;
	char s[1001];
	int count = 0;
	float sum = 0.0f, mean;
	float grade[9] = { 4.5f, 4.0f, 3.5f, 3.0f, 2.5f, 2.0f, 1.5f, 1.0f, 0.0f };
	
	scanf("%s", s);
	
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '+')
		{
			continue;
		}
		
		count++;
		
		if (s[i + 1] == '+')
		{
			sum += grade[(s[i] - 'A') * 2];
		}
		else
		{
			sum += grade[(s[i] - 'A') * 2 + 1];
		}
	}
	
	mean = sum / count;
	
	printf("%lf", mean);
	
	return 0;
}