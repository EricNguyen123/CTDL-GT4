#include<iostream>
using namespace std;
int n;
int x[50];
int y[1000][50];
int sum = 0;
int d = 0;
void capnhat(int v)
{
    y[d][0] = v;
    for(int i = 1; i<= v; i++)
    {
        y[d][i] = x[i];
    }
}
void xuly(int i, int m)
{
    for(int j = m; j >= 1; j--)
    {
        x[i] = j;
        sum += x[i];
        if(sum == n)
        {
            capnhat(i);
            d++;
        }
        else if(sum < n)
        {
            xuly(i + 1, j);
        }
        sum -= x[i];
    }
}
void in()
{
    cout << d << endl;
    for(int i = 0; i < d; i++)
    {
        cout << "(";
        for(int j = 1; j <= y[i][0]; j++)
        {
            cout << y[i][j];
            if(j < y[i][0])
            {
                cout << " ";
            }
        }
        cout << ")" << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        d = 0;
        xuly(1, n);
        in();
    }
    return 0;
}