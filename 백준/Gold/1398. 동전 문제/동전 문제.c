#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

long long price;
int dp[100];
int res;

void Solve();

int main(void)
{
	int i;
	int t;
	
	for (i = 0; i < 100; i++)
	{
		dp[i] = 100;
	}
	
	for (i = 0; i < 100; i++)
	{
		if (i < 10)
		{
			dp[i] = i;
		}
		else if (i < 25)
		{
			dp[i] = Min(dp[i - 10] + 1, dp[i - 1] + 1);
		}
		else
		{
			dp[i] = Min(dp[i - 25] + 1, dp[i - 10] + 1);
			dp[i] = Min(dp[i], dp[i - 1] + 1);
		}
	}
	
	scanf("%d", &t);
	
	while (t--)
	{
		res = 0;
		
		scanf("%lld", &price);
		Solve();
		printf("%d\n", res);
	}
	
	return 0;
}

void Solve()
{
	res += dp[price % 100];
	price /= 100;
	
	if (price > 0)
	{
		Solve();
	}
}