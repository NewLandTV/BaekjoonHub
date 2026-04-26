#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int s, e;
} Meeting, *PMeeting;

int Compare1(const void* a, const void* b);
int Compare2(const void* a, const void* b);

int main(void)
{
	int i;
	int n;
	Meeting meetings[100000];
	int k, cnt;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &meetings[i].s, &meetings[i].e);
	}
	
	qsort(meetings, n, sizeof(Meeting), Compare1);
	qsort(meetings, n, sizeof(Meeting), Compare2);
	
	for (i = cnt = 1, k = meetings[0].e; i < n; i++)
	{
		if (meetings[i].s >= k)
		{
			k = meetings[i].e;
			cnt++;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}

int Compare1(const void* a, const void* b)
{
	PMeeting x = (PMeeting)a, y = (PMeeting)b;
	
	return x->e - y->e;
}

int Compare2(const void* a, const void* b)
{
	PMeeting x = (PMeeting)a, y = (PMeeting)b;
	
	return x->e == y->e ? x->s - y->s : 0;
}