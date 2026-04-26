#include <iostream>
#include <string>

int main()
{
	int n;
	
	std::cin >> n;
	
	while (n--)
	{
		std::string s;
		int i, j;
		
		std::cin >> s >> i >> j;
		
		std::string r = s.substr(0, i) + s.substr(j);
		
		std::cout << r << "\n";
	}
	
	return 0;
}