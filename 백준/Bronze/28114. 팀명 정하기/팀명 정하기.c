#include <stdio.h>

typedef struct _Member
{
	int p;
	int y;
	char s[6];
} Member;

int main(void)
{
	int i, j;
	Member members[3];
	Member temp;
	char name1[7], name2[4];
	int year;
	
	for (i = 0; i < 3; i++)
	{
		scanf("%d %d %s", &members[i].p, &members[i].y, members[i].s);
	}
	
	for (i = 2; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (members[j].y < members[j + 1].y)
			{
				temp = members[j];
				members[j] = members[j + 1];
				members[j + 1] = temp;
			}
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		year = members[2 - i].y % 100;
		name1[i * 2] = year / 10 + '0';
		name1[i * 2 + 1] = year % 10 + '0';
	}
	
	name1[6] = 0;
	
	for (i = 2; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (members[j].p < members[j + 1].p)
			{
				temp = members[j];
				members[j] = members[j + 1];
				members[j + 1] = temp;
			}
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		name2[i] = members[i].s[0];
	}
	
	name2[3] = 0;
	
	printf("%s\n", name1);
	printf("%s", name2);
	
	return 0;
}