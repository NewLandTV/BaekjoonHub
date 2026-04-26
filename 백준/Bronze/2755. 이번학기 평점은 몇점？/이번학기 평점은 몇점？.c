#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char subject[101];
	float mark;
	char grade[3];
	float x;
	float sum = 0.0f;
	float markSum = 0.0f;
	float mean;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s %f %s", subject, &mark, grade);
		
		x = 0.0f;
		
		if (grade[1] == '+')
		{
			x += 0.3f;
		}
		else if (grade[1] == '-')
		{
			x -= 0.3f;
		}
		
		switch (grade[0])
		{
		case 'A':
			x += 4.0f;
			
			break;
		case 'B':
			x += 3.0f;
			
			break;
		case 'C':
			x += 2.0f;
			
			break;
		case 'D':
			x += 1.0f;
			
			break;
		}
		
		sum += mark * x;
		markSum += mark;
	}
	
	mean = sum / markSum;
	
	printf("%.02f", mean);
	
	return 0;
}