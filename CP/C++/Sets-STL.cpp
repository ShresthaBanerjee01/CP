#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    int q;
    cin >> q;
    set<int> s;
    for(int i=0;i<q;i++)
    {
        int x,y;
        cin >> y >> x;
        if(y==1)
        {
            s.insert(x);
        }
        if(y==2)
        {
            s.erase(x);
        }
        if(y==3)
        {
            auto it = s.find(x);
            if(it!=s.end())
            {
                cout << "Yes" << endl;
            }
            else 
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}



