#include <stdio.h>
#include <string.h>

double GetMolarMass(char element, int number);

int main(void)
{
	int i;
	int t;
	char molecule[81];
	char element;
	int len, number;
	double sum;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%s", molecule);
		
		len = strlen(molecule);
		
		for (i = 0, sum = 0.0; i < len; i++)
		{
			number = 1;
			
			if (molecule[i] > 'A')
			{
				element = molecule[i];
				
				if (i < len - 1 && molecule[i + 1] <= '9')
				{
					number = molecule[++i] - '0';
				}
				
				if (i < len - 1 && molecule[i + 1] <= '9')
				{
					number = number * 10 + molecule[++i] - '0';
				}
			}
			
			sum += GetMolarMass(element, number);
		}
		
		printf("%.3lf\n", sum);
	}     
	
	return 0;
}

double GetMolarMass(char element, int number)
{
	switch (element)
	{
		case 'C':
			return number * 12.01;
		case 'H':
			return number * 1.008;
		case 'O':
			return number * 16.0;
		case 'N':
			return number * 14.01;
	}
}