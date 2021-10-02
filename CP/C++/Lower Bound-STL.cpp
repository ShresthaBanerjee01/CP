#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n , q;
    vector<int> a;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin >> k;
        a.push_back(k);
    }   
    cin >> q;
    for(int i=0;i<q;i++)
    {
        int k;
        cin >> k;
        auto d=lower_bound(a.begin(),a.end(),k);
        if(*d==k)
        {
            cout << "Yes" <<" "<< (d-a.begin()+1) << endl;
        }
        else 
        {
            cout << "No" <<" "<< (d-a.begin()+1) << endl;
        }
    }
    return 0;
}
