#include <stdio.h>

int StrLength(char* str)
{
	int length;
	
	for (length = 0; str[length] != NULL; length++);
	
	return length;
}

void StrReverse(char* str, int length)
{
	int i;
	char temp;
	
	for (i = 0; i < length >> 1; i++)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}

void Sum(char* a, char* b)
{
	int i;
	int aLength = strlen(a);
	int bLength = strlen(b);
	int n1, n2, sum, carry = 0;
	
	StrReverse(a, aLength);
	StrReverse(b, bLength);
	
	for (i = 0; i < aLength || i < bLength; i++)
	{
		n1 = a[i] < 48 || a[i] > 57 ? 0 : a[i] - 48;
		n2 = b[i] < 48 || b[i] > 57 ? 0 : b[i] - 48;
		sum = n1 + n2 + carry;
		
		if (sum >= 10)
		{
			a[i] = (sum - 10) + 48;
			carry = 1;
			
			continue;
		}
		
		a[i] = sum + 48;
		carry = 0;
	}
	
	if (carry == 1)
	{
		a[i] = 49;
		a[i + 1] = 0;
		aLength = i + 1;
	}
	else
	{
		a[i] = 0;
		aLength = i;
	}
	
	StrReverse(a, aLength);
}

int main(void)
{
	char a[5002] = { 0, }, b[5001] = { 0, };
	
	scanf("%s %s", a, b);
	Sum(a, b);
	printf("%s", a);
	
	return 0;
}