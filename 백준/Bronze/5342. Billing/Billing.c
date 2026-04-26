#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[10];
	float total = 0.0f;
	
	while (1)
	{
		scanf("%s", s);
		
		if (strcmp(s, "EOI") == 0)
		{
			break;
		}
		
		if (strcmp(s, "Paper") == 0)
		{
			total += 57.99f;
		}
		if (strcmp(s, "Printer") == 0)
		{
			total += 120.5f;
		}
		if (strcmp(s, "Planners") == 0)
		{
			total += 31.25f;
		}
		if (strcmp(s, "Binders") == 0)
		{
			total += 22.5f;
		}
		if (strcmp(s, "Calendar") == 0)
		{
			total += 10.95f;
		}
		if (strcmp(s, "Notebooks") == 0)
		{
			total += 11.2f;
		}
		if (strcmp(s, "Ink") == 0)
		{
			total += 66.95f;
		}
	}
	
	printf("$%.2f", total);
	
	return 0;
}