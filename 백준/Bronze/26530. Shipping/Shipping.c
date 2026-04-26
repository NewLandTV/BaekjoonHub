#include <stdio.h>

int main(void)
{
	int n;
	int x;
	char name[100];
	int c;
	float p;
	float answer;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &x);
		
		answer = 0.0f;
		
		while (x--)
		{
			scanf("%s %d %f", name, &c, &p);
			
			answer += c * p;
		}
		
		printf("$%.2f\n", answer);
	}
	
	return 0;
}