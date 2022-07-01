#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int d = 0;
    for(int i = a; i <= b; i++)
    {
        long sum = 1;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                if(j == i / j)
                {
                    sum += j;
                }
                else{
                    sum += (j + i / j);
                }
               
            }            
            if(sum > i)
            {
                d++;
                break;
            }
        }
    }
    cout << d << endl;
    return 0;
}