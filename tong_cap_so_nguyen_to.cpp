#include<iostream>
#include<set>
#include<stdbool.h>
#include<math.h>
using namespace std;
bool check(int a)
{
	for(int i = 2; i <= sqrt(a); i++)
	{
		if(a % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin >> t;
	int k = 3;
	set <int> s;
	s.insert(2);
	while(t--)
	{
		int n;
		cin >> n;
		
		set <int> ::iterator it;
	
		if(n > k)
		{
			for(int i = k; i < n; i += 2)
		    {
			    if(check(i) == true)
			    {
			    	s.insert(i);
				}
		    }
		    if(n % 2 == 0)
		    {
		    	k = n + 1;
			}
			else
			{
				k = n;
			}
		}
		int d = 0;
		for(set <int> ::iterator i = s.begin(); i != s.end(); i++)
		{
			it = s.find(n - *i);
			if(it != s.end())
			{
				d = 1;
				cout << *i << " " << *it << endl;
				break;
			}
		}
		if(d == 0)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}
