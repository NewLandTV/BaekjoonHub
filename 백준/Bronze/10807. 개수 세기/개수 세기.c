#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int number;
	int v;
	int array[201] = { 0, };
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &number);
		
		array[number + 100]++;
	}
	
	scanf("%d", &v);
	printf("%d", array[v + 100]);
	
	return 0;
}