#include<iostream>
using namespace std;
int n;
int x[30];
void in()
{
    for(int i = 1; i <= n; i++)
    {
        cout << char(x[i] + 'A');
    }
    int j = 1;
    while(x[j] == 1)
    {
        j++;
    }
    if(j <= n)
    {
        cout << ",";
    }
   
}
void xuly(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if(i == n)
        {
            in();
        }
        else{
            xuly(i + 1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        xuly(1);
        cout << endl;
    }
    return 0;
}