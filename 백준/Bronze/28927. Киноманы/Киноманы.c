#include <stdio.h>

int main(void)
{
	int t1, e1, f1;
	int t2, e2, f2;
	int max;
	int mel;
	
	scanf("%d %d %d", &t1, &e1, &f1);
	scanf("%d %d %d", &t2, &e2, &f2);
	
	max = t1 * 3 + e1 * 20 + f1 * 120;
	mel = t2 * 3 + e2 * 20 + f2 * 120;
	
	if (max == mel)
	{
		printf("Draw");
		
		return 0;
	}
	
	printf("%s", max > mel ? "Max" : "Mel");
	
	return 0;
}