#include <stdio.h>

int SumDigit(int value, int radix);

int main(void)
{
	int i;
	int dec, duo, hex;
	
	for (i = 2992; i < 10000; i++)
	{
		dec = SumDigit(i, 10);
		duo = SumDigit(i, 12);
		hex = SumDigit(i, 16);
		
		if (dec == duo && duo == hex)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}

int SumDigit(int value, int radix)
{
	int sum = 0;
	
	while (value > 0)
	{
		sum += value % radix;
		value /= radix;
	}
	
	return sum;
}