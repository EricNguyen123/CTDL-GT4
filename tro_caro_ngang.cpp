#include<iostream>
#include<stdbool.h>
#include<algorithm>
using namespace std;
int n;
string k;
string h;
int x[20];
bool check()
{
    int d = 0;
    int f = 0;
    int Maxd = 0;
    int Maxf = 0;
    int j = 1;
    while(j <= n)
    {
        f = 0;
        while(x[j] == 0 && j <= n)
        {
            j++;
            f++;
        }
        Maxf = max(Maxf, f);
        d = 0;
        while(x[j] == 1 && j <= n)
        {
            j++;
            d++;
        }
        Maxd = max(Maxd, d);
    }
    if(Maxd > Maxf && Maxd >= 5)
    {
        //cout << 1;
        return true;
    }
    return false;
}
void in()
{
    for(int i = 1; i <= n; i++)
    {
        if(x[i] == 1)
        {
            cout << k;
        }
        else{
            cout << h;
        }
    }
    cout << endl;
}
void xuly(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if(i == n)
        {
            if(check() == true)
            {
                in();
            }
        }
        else{
            xuly(i + 1);
        }
    }
}


bool check2()
{
    int d = 0;
    int f = 0;
    int Maxd = 0;
    int Maxf = 0;
    int j = 1;
    while(j <= n)
    {
        f = 0;
        while(x[j] == 0 && j <= n)
        {
            j++;
            f++;
        }
        Maxf = max(Maxf, f);
        d = 0;
        while(x[j] == 1 && j <= n)
        {
            j++;
            d++;
        }
        Maxd = max(Maxd, d);
    }
    if(Maxd < Maxf && Maxf >= 5)
    {
        //cout << 1;
        return true;
    }
    return false;
}
void in2()
{
    for(int i = 1; i <= n; i++)
    {
        if(x[i] == 0)
        {
            cout << k;
        }
        else{
            cout << h;
        }
    }
    cout << endl;
}
void xuly2(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if(i == n)
        {
            if(check2() == true)
            {
                in2();
            }
        }
        else{
            xuly2(i + 1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        if(k == "O")
        {
            h = "X";
            xuly2(1);
        }
        else{
            h = "O";
            xuly(1);
        }
        
    }
}