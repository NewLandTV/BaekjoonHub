#include <iostream>
#include <map>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n, m;
	map<string, string> sites;
	string url, password;
	
	cin >> n >> m;
	
	while (n--)
	{
		cin >> url >> password;
		
		sites[url] = password;
	}
	
	while (m--)
	{
		cin >> url;
		cout << sites[url] << '\n';
	}
	
	return 0;
}