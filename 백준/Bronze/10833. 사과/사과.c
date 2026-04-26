#include <stdio.h>

int main(void)
{
	int n;
	int student, apple;
	int sum = 0;
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%d %d", &student, &apple);
		
		while (apple >= student)
		{
			apple -= student;
		}
		
		sum += apple;
	}
	
	printf("%d", sum);
	
	return 0;
}