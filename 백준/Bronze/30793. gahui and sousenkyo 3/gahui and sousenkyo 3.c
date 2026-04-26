#include <stdio.h>

int main(void)
{
	int p, r;
	float v;
	
	scanf("%d %d", &p, &r);
	
	v = (float)p / r;
	
	if (v < 0.2f)
	{
		printf("weak");
	}
	else if (v < 0.4f)
	{
		printf("normal");
	}
	else if (v < 0.6f)
	{
		printf("strong");
	}
	else
	{
		printf("very strong");
	}
	
	return 0;
}