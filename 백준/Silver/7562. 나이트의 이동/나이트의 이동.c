#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

#define NO_VISIT -1

typedef struct
{
	int x, y;
} Coord;

typedef struct _Queue Queue, *PQueue;

struct _Queue
{
	Coord* arr;
	int head, tail, size;
	void (*Enqueue)(PQueue, Coord);
	Coord (*Dequeue)(PQueue);
};

int l;
int board[300][300];
PQueue q;
Coord dir[8] = {{ 1, 2 }, { 2, 1 }, { 2, -1 }, { 1, -2 }, { -1, -2 }, { -2, -1 }, { -2, 1 }, { -1, 2 }};

PQueue InitQueue(int size);
void FreeQueue(PQueue q);
int IsEmpty(PQueue q);
int IsFull(PQueue q);
void Enqueue(PQueue q, Coord v);
Coord Dequeue(PQueue q);

void BFS(int x, int y);

int main(void)
{
	int i, j;
	int t;
	int px, py;
	int tx, ty;
	
	q = InitQueue(100001);
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &l);
		scanf("%d %d", &px, &py);
		scanf("%d %d", &tx, &ty);
		
		if (px == tx && py == ty)
		{
			printf("0\n");
			
			continue;
		}
		
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < l; j++)
			{
				board[i][j] = NO_VISIT;
			}
		}
		
		BFS(px, py);
		printf("%d\n", board[tx][ty]);
	}
	
	FreeQueue(q);
	
	return 0;
}

PQueue InitQueue(int size)
{
	PQueue q = (PQueue)malloc(sizeof(Queue));
	
	q->size = size + 1;
	q->arr = (Coord*)calloc(q->size, sizeof(Coord));
	q->head = q->tail = 0;
	q->Enqueue = Enqueue;
	q->Dequeue = Dequeue;
	
	return q;
}

void FreeQueue(PQueue q)
{
	free(q->arr);
	free(q);
}

int IsEmpty(PQueue q)
{
	return q->head == q->tail;
}

int IsFull(PQueue q)
{
	return q->head == (q->tail + 1) % q->size;
}

void Enqueue(PQueue q, Coord v)
{
	if (IsFull(q))
	{
		return;
	}
	
	q->tail = (q->tail + 1) % q->size;
	q->arr[q->tail] = v;
}

Coord Dequeue(PQueue q)
{
	q->head = (q->head + 1) % q->size;
	
	return q->arr[q->head];
}

void BFS(int x, int y)
{
	int i;
	Coord c = { x, y }, t;
	
	q->Enqueue(q, c);
	
	board[x][y] = 0;
	
	while (!IsEmpty(q))
	{
		c = q->Dequeue(q);
		
		for (i = 0; i < 8; i++)
		{
			t.x = c.x + dir[i].x;
			t.y = c.y + dir[i].y;
			
			if (t.x < 0 || t.x >= l || t.y < 0 || t.y >= l || board[t.x][t.y] != NO_VISIT)
			{
				continue;
			}
			
			q->Enqueue(q, t);
			
			board[t.x][t.y] = board[c.x][c.y] + 1;
		}
	}
}