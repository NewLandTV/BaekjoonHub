#include <stdio.h>
#include <math.h>

int IsPrime(int n);

int main(void)
{
	int originPhone, newPhone;
	
	scanf("%d %d", &originPhone, &newPhone);
	
	newPhone = newPhone * 1000000 + originPhone;
	
	if (IsPrime(originPhone) && IsPrime(newPhone))
	{
		printf("Yes");
		
		return 0;
	}
	
	printf("No");
	
	return 0;
}

int IsPrime(int n)
{
	int i;
	
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}