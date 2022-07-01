#include<iostream>
#include<set>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n;
		cin >> m;
		multiset <long long> a;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			a.insert(x);
		}
		for(int i = 0; i < m; i++)
		{
			int x;
			cin >> x;
			a.insert(x);
		}
		for(multiset <long long> ::iterator i = a.begin(); i != a.end(); i++)
		{
			cout << *i << " ";
		}
		cout << endl;
	}
	return 0;
}
