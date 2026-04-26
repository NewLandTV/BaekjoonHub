#include <stdio.h>

typedef struct
{
	char name[21];
	float a, b;
} Player;

void Swap(Player* a, Player* b);
void QuickSort(Player* players, int l, int r);

int main(void)
{
	int i, j, k;
	int n;
	Player players[500];
	char* first;
	float sum, min = 80.0f;
	int idx;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s %f %f", players[i].name, &players[i].a, &players[i].b);
	}
	
	QuickSort(players, 0, n - 1);
	
	for (i = 0; i < n; i++)
	{
		sum = players[i].a;
		
		for (j = 0, k = 0; k < 3 && j < n; j++)
		{
			if (i == j)
			{
				continue;
			}
			
			k++;
			sum += players[j].b;
		}
		
		if (min > sum)
		{
			min = sum;
			idx = i;
		}
	}
	
	printf("%.2f\n", min);
	printf("%s\n", players[idx].name);
	
	for (i = 0, j = 0; i < n && j < 3; i++)
	{
		if (i == idx)
		{
			continue;
		}
		
		j++;
		
		printf("%s\n", players[i].name);
	}
	
	return 0;
}

void Swap(Player* a, Player* b)
{
	Player temp = *a;
	*a = *b;
	*b = temp;
}

void QuickSort(Player* players, int l, int r)
{
	int i, j;
	int pivot, temp;
	
	if (l >= r)
	{
		return;
	}
	
	for (i = pivot = l, j = r; i < j;)
	{
		for (; players[i].b <= players[pivot].b && i <= r; i++);
		for (; players[j].b > players[pivot].b && j >= l; j--);
		
		if (i < j)
		{
			Swap(&players[i], &players[j]);
		}
	}
	
	Swap(&players[j], &players[pivot]);
	QuickSort(players, l, j - 1);
	QuickSort(players, j + 1, r);
}