#include <stdio.h>
#include <memory.h>

int main(void)
{
	int i, j, k;
	int n, m;
	int sum = 0;
	int* data;
	
	scanf("%d %d", &n, &m);
	
	data = (int*)malloc(sizeof(int) * (n + 1));
	
	data[0] = 0;
	
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &data[i]);
		
		sum += data[i];
		data[i] = sum;
	}
	
	for (k = 0; k < m; k++)
	{
		scanf("%d %d", &i, &j);
		printf("%d\n", data[j] - data[i - 1]);
	}
	
	free(data);
	
	return 0;
}