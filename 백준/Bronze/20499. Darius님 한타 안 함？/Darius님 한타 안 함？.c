#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[9];
	char* ptr;
	int k, d, a;
	
	scanf("%s", input);
	
	ptr = strtok(input, "/");
	
	k = atoi(ptr);
	
	ptr = strtok(NULL, "/");
	
	d = atoi(ptr);
	
	ptr = strtok(NULL, "/");
	
	a = atoi(ptr);
	
	if (k + a < d || d == 0)
	{
		printf("hasu");
		
		return 0;
	}
	
	printf("gosu");
	
	return 0;
}