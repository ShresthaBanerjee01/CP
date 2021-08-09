#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int a[6]={0};
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[x]++;
    }
    int ans, mx;
    ans=0;
    mx=0;
    for(int i = 1; i <= 5; i++){
        if(a[i] > mx){
            mx = a[i];
            ans = i;
        }
    }
    cout << ans;
    return 0;
}
