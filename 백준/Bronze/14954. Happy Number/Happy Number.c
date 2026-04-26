#include <stdio.h>

int SumDigits(int n);

int main(void)
{
	int n;
	int s, f;
	
	scanf("%d", &n);
	
	s = SumDigits(n);
	f = SumDigits(s);
	
	while (f != 1 && s != 1)
	{
		if (f == s)
		{
			printf("UNHAPPY");
			
			return 0;
		}
		
		s = SumDigits(s);
		f = SumDigits(SumDigits(f));
	}
	
	printf("HAPPY");
	
	return 0;
}

int SumDigits(int n)
{
	int sum = 0;
	
	while (n != 0)
	{
		sum += (n % 10) * (n % 10);
		n /= 10;
	}
	
	return sum;
}