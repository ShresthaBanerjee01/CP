#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    string str;
    cin >> str ;
    int count , height;
    count =0;
    height=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='U')
        {
            height++;
        }
        else 
        {
            if(height==0)
            {
                count++;
            }
            height--;
        }
    }
    if(height<0)
    {
        count--;
    }
    cout << count << endl;
    return 0;
}
