#include<iostream>
#include<algorithm>
using namespace std;
void xuly(string a, string b)
{
    int m = a.size(), n = b.size();
    int x[m + 1][n + 1];
    for(int i = 0; i <= m; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if(i == 0 || j == 0)
            {
                x[i][j] = 0;
            }
            else if(a[i - 1] == b[j - 1])
            {
                x[i][j] = x[i - 1][j - 1] + 1;
            }
            else{
                x[i][j] = max(x[i - 1][j], x[i][j - 1]);
            }
        }
    }
    cout << x[m][n] << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b; 
        xuly(a, b);
    }
    return 0;
}