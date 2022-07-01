#include<iostream>
#include<math.h>
using namespace std;
int tinh(int a[], int x[])
{
	int s = a[x[1]] + a[x[2]];
	return s;
}
void xuly(int i, int x[], int n, int k, int a[], int &min)
{
	for(int j = x[i - 1] + 1; j <= n - k + i; j++)
	{
		x[i] = j;
		if(i == k)
		{
		    int s = tinh(a, x);
		    if (abs(0 - s) < abs(0 - min))
		    {
		    	min = s;
			}
		}
		else
		{
			xuly(i + 1, x, n, k, a, min);
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int min = 2000000;
		int n;
		cin >> n;
		int *a = new int[n + 1];
		int *x = new int[n + 1];
		x[0] = 0;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		xuly(1, x, n, 2, a, min);
		cout << min << endl;
	}
	return 0;
}
