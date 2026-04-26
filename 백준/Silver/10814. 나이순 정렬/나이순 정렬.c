#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Member
{
	short age;
	int joinIndex;
	char name[101];
} Member;

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int n;
	
	Member* members;
	
	scanf("%d", &n);
	
	members = (Member*)malloc(sizeof(Member) * n);
	
	for (i = 0; i < n; scanf("%hd %s", &members[i].age, members[i].name), members[i].joinIndex = i++);
	
	qsort(members, n, sizeof(Member), Compare);
	
	for (i = 0; i < n; i++)
	{
		printf("%hd %s\n", members[i].age, members[i].name);
	}
	
	free(members);
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	Member* member1 = (Member*)a;
	Member* member2 = (Member*)b;
	
	if (member1->age > member2->age)
	{
		return 1;
	}
	
	if (member1->age < member2->age)
	{
		return -1;
	}
	
	if (member1->age == member2->age)
	{
		if (member1->joinIndex > member2->joinIndex)
		{
			return 1;
		}
		
		if (member1->joinIndex < member2->joinIndex)
		{
			return -1;
		}
	}
	
	return 0;
}