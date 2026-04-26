#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	int jinju;
	int c[1002] = { 0, };
	int count = 0;
	string s;
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		long long price;
		
		cin >> s >> price;
		
		if (s == "jinju")
		{
			jinju = price;
		}
		
		c[min(price, static_cast<long long>(1001))]++;
	}
	
	for (int i = jinju + 1; i <= 1001; i++)
	{
		count += c[i];
	}
	
	cout << jinju << '\n' << count;
	
	return 0;
}