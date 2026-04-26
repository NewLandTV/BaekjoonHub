#include <stdio.h>

void PrintBigNumber(int n);

int main(void)
{
	int i;
	char a[11];
	
	scanf("%s", a);
	PrintBigNumber(a[i] - '0');
	
	for (i = 1; a[i]; i++)
	{
		printf("\n\n");
		PrintBigNumber(a[i] - '0');
	}
	
	return 0;
}

void PrintBigNumber(int n)
{
	switch (n)
	{
		case 0:
			printf("0000\n");
			printf("0  0\n");
			printf("0  0\n");
			printf("0  0\n");
			printf("0000");
			
			break;
		case 1:
			printf("   1\n");
			printf("   1\n");
			printf("   1\n");
			printf("   1\n");
			printf("   1");
			
			break;
		case 2:
			printf("2222\n");
			printf("   2\n");
			printf("2222\n");
			printf("2\n");
			printf("2222");
			
			break;
		case 3:
			printf("3333\n");
			printf("   3\n");
			printf("3333\n");
			printf("   3\n");
			printf("3333");
			
			break;
		case 4:
			printf("4  4\n");
			printf("4  4\n");
			printf("4444\n");
			printf("   4\n");
			printf("   4");
			
			break;
		case 5:
			printf("5555\n");
			printf("5\n");
			printf("5555\n");
			printf("   5\n");
			printf("5555");
			
			break;
		case 6:
			printf("6666\n");
			printf("6\n");
			printf("6666\n");
			printf("6  6\n");
			printf("6666");
			
			break;
		case 7:
			printf("7777\n");
			printf("   7\n");
			printf("   7\n");
			printf("   7\n");
			printf("   7");
			
			break;
		case 8:
			printf("8888\n");
			printf("8  8\n");
			printf("8888\n");
			printf("8  8\n");
			printf("8888");
			
			break;
		case 9:
			printf("9999\n");
			printf("9  9\n");
			printf("9999\n");
			printf("   9\n");
			printf("   9");
			
			break;
	}
}