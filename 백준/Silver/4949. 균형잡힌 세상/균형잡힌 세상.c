#include <stdio.h>
#include <string.h>

void Check(char* str);

int main(void)
{
    char str[102];
    
    while (1)
    {
        fgets(str, sizeof(str), stdin);
        
        if (strlen(str) <= 2 && str[0] == '.')
        {
           break;
        }
        
        Check(str);
    }
    
    return 0;
}

void Check(char* str)
{
	int i, count;
	char stack[101] = { 0, };
	
	for (i = 0, count = 0; i < strlen(str) - 1; i++)
	{
		if (str[i] == '(' || str[i] == '[')
		{
			stack[count++] = str[i];
		}
		else if (str[i] == ')')
		{
			if (count == 0 || stack[count - 1] == '[')
			{
				printf("no\n");
				
				return;
			}
			
			count--;
		}
		else if (str[i] == ']')
		{
			if (count == 0 || stack[count - 1] == '(')
			{
				printf("no\n");
				
				return;
			}
			
			count--;
		}
	}
	
	printf("%s\n", count == 0 ? "yes" : "no");
}