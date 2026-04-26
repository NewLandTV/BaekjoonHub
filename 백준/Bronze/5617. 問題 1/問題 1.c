#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int l[3];
	int t, rt = 0, at = 0, ot = 0;
	
	for (t = 0; ; t++)
	{
		for (i = 0; i < 3; i++)
		{
			scanf("%d", &l[i]);
		}
		
		qsort(l, 3, sizeof(int), Compare);
		
		if (l[0] + l[1] <= l[2])
		{
			printf("%d %d %d %d\n", t, rt, at, ot);
			
			break;
		}
		
		if (l[0] * l[0] + l[1] * l[1] == l[2] * l[2])
		{
			rt++;
		}
		else if (l[0] * l[0] + l[1] * l[1] > l[2] * l[2])
		{
			at++;
		}
		else
		{
			ot++;
		}
	}
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}