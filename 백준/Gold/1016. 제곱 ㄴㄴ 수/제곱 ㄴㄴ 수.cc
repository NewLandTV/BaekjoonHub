#include <iostream>
#include <algorithm>

typedef long long ll;

int main()
{
	ll min, max;
	
	std::cin >> min >> max;
	
	ll count = max - min + 1;
	bool* p = new bool[count];
	
	std::fill(p, p + count, true);
	
	for (ll i = 2; i * i <= max; i++)
	{
		for (ll j = (min / (i * i)) * i * i; j <= max; j += i * i)
		{
			if (j >= min && p[j - min])
			{
				count--;
				p[j - min] = false;
			}
		}
	}
	
	delete p;
	
	std::cout << count;
	
	return 0;
}