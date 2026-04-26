#include <stdio.h>

int main(void)
{
	char name[11];
	int age;
	int weight;
	
	while (1)
	{
		scanf("%s %d %d", name, &age, &weight);
		
		if (name[0] == '#')
		{
			break;
		}
		
		printf("%s %s\n", name, age > 17 || weight >= 80 ? "Senior" : "Junior");
	}
	
	return 0;
}