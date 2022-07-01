#include<iostream>
#include<stdbool.h>
#include<algorithm>
#include<vector>
using namespace std;
int d = 0;
struct Vector
{
	vector <int> y;
};
void In(Vector c[])
{
	for(int i = d - 1; i >= 0; i--)
	{
		for(int j = 0; j < c[i].y.size(); j++)
		{
			cout << c[i].y[j] << " ";
		}
		cout << endl;
	}
}
void in(int x[], int n, Vector c[])
{
	for(int i = 0; i <= n; i++)
	{
		c[d].y.push_back(x[i]);
	}
}
void xu_ly(int i, int a[], int x[], bool b[], long &s, int n, int k, int m, Vector c[])
{
	for(int j = m ; j < n; j++)
	{
		if(b[j] == true)
		{
			s += a[j];
			x[i] = a[j];
			b[j] = false;
		    if(s == k)
		    {
		    	in(x, i, c);
		    	d++;	
			}
			else if(s < k)
			{
				xu_ly(i + 1, a, x, b, s, n, k, j + 1, c);
			}
			s -= a[j];
			b[j] = true;
		}
		
	}
}

int main()
{
		int n, k;
		cin >> n >> k;
		int *a = new int[n];
		int *x = new int[n];
		bool *b = new bool[n];
		Vector *c = new Vector[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = true;
		}
		sort(a, a + n);
		long s = 0;
		d = 0;
		xu_ly(0, a, x, b, s, n, k, 0, c);
		In(c);
		cout << d << endl;
	return 0;
}
