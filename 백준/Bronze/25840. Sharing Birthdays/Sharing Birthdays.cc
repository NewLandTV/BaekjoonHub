#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i;
	int n;
	vector<string> v;
	string str;
	
	cin >> n;
	
	for (i = 0; i < n; i++)
	{	
		cin >> str;
		
		if (find(v.begin(), v.end(), str) == v.end())
		{
			v.push_back(str);
		}
	}
	
	cout << v.size();
	
	return 0;
}