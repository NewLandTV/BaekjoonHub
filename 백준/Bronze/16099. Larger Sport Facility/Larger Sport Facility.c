#include <stdio.h>

int main(void)
{
	int n;
	long long lt, wt, le, we;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%lld %lld %lld %lld", &lt, &wt, &le, &we);
		
		if (lt * wt == le * we)
		{
			printf("Tie\n");
			
			continue;
		}
		
		printf("%s\n", lt * wt > le * we ? "TelecomParisTech" : "Eurecom");
	}
	
	return 0;
}