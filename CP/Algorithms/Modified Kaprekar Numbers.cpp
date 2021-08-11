#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    long p , q , sum , d ,a ,b,s ,c;
    cin >> p;
    cin >> q;
    c =0;
    for(long i=p;i<=q;i++)
    {
        d=0;
        sum=0;
        a = i;
        s = 0;
        while(a!=0)
        {
            a = a/10;
            d++;
        }
        s = i*i;
        b = pow(10,d);
        long r = s%b ;
        long l = s/b;
        sum = r + l;
        if(sum==i)
        {
            cout << i << " ";
            c++;
        }
    }
    if(c==0)
    {
        cout << "INVALID RANGE" ;
    }
    return 0;
}
