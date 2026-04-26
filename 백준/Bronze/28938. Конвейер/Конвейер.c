#include <stdio.h>

int main(void)
{
	int n, x;
	int left = 0, right = 0;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%d", &x);
		
		if (x == -1)
		{
			left++;
		}
		else if (x == 1)
		{
			right++;
		}
	}
	
	if (left == right)
	{
		printf("Stay");
		
		return 0;
	}
	
	printf("%s", left > right ? "Left" : "Right");
	
	return 0;
}