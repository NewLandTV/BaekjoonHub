#include <stdio.h>

int main(void)
{
	int C = 0, N = 0;
	int i, j;
	
	scanf("%d", &C);

	for (i = 0; i < C; i++)
	{
		scanf("%d", &N);
		
		int score[1000], sum = 0;
		double avg = 0.00;
		
		for (j = 0; j < N; j++)
		{
			scanf("%d", &score[j]);
			
			sum += score[j];
		}

		avg = (double)sum / N;
		
		int count = 0;
		
		for (j = 0; j < N; j++)
		{
			if (avg < score[j])
			{
				count++;
			}
		}
		
		printf("%.3f%%\n", (double)count * 100 / N);
	}
	
	return 0;
}