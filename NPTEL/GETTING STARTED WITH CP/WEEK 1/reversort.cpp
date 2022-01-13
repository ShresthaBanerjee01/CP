/*

Reversort is an algorithm to sort a list of distinct integers in increasing order. The algorithm is based on the "Reverse" operation. Each application of this operation reverses the order of some contiguous part of the list.

The pseudocode of the algorithm is the following:

Reversort(L):
  for i := 1 to length(L) - 1
    j := position with the minimum value in L between i and length(L), inclusive
    Reverse(L[i..j])
    
 */


#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int reversort(vi &s)
{
    int cost=0;
    
    for(int i=0;i<s.size()-1;i++)
    {
        int m=*min_element(s.begin()+i,s.end());
        auto idx = find(s.begin(), s.end(), m);
        reverse(s.begin() + i, idx + 1);
        cost += distance(s.begin(),idx) - i + 1; 

    }
    return cost;
}
int main()
{
    std::ios::sync_with_stdio(false);

    int t;
    cin >> t;
    
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        vi s;
        for(int j=0;j<n;j++)
        {
            int num;
            cin >> num;
            s.push_back(num);
            
        }
        cout<< "Case #" << (i+1) << ": " << reversort(s) << endl;
        
    }
    return 0;
}
