#include <stdio.h>
#include <string.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	char a[10002], b[10002];
	char result[10002], temp[10002];
	int la, lb, len, carry = 0, digit;
	
	scanf("%s %s", a, b);
	
	la = strlen(a);
	lb = strlen(b);
	
	if (la < lb)
	{
		for (i = 0; i < lb - la; result[i++] = '0');
		
		sprintf(temp, "%s%s", result, a);
		strcpy(a, temp);
	}
	else if (la > lb)
	{
		for (i = 0; i < la - lb; result[i++] = '0');
		
		sprintf(temp, "%s%s", result, b);
		strcpy(b, temp);
	}
	
	for (i = 1, len = Max(la, lb); i <= len; i++)
	{
		digit = a[len - i] + b[len - i] - '0' * 2 + carry;
		
		if (digit < 10)
		{
			carry = 0;
		}
		else
		{
			carry = 1;
			digit -= 10;
		}
		
		result[i - 1] = digit + '0';
	}
	
	if (carry)
	{
		printf("1");
	}
	
	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", result[i]);
	}
	
	return 0;
}