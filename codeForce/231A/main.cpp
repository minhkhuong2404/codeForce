#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,sure,ans = 0;
    cin>>n;
    int arr[n][3];
    for ( int i = 0;i < n;i++){
        sure = 0;
        for ( int j = 0;j< 3;j++){
            cin>>arr[i][j];
            if (arr[i][j] == 1){
                sure += 1;
            }
        }
        if (sure >= 2){
            ans += 1;
        }
    }
    cout<<ans;
    return 0;
}