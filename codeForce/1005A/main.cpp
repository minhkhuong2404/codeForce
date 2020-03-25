#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,stair = 0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin>>a[i];
        if (a[i] == 1){
            stair += 1;
        }
    }
    cout<<stair<<endl;
    for (int j = 0; j < n-1;j++){
        if (a[j+1] <= a[j]){
            cout<<a[j]<<" ";
        }
    }
    cout<<a[n-1];
    return 0;
}