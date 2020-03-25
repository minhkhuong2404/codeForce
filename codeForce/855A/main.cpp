#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string arr[n];
    string *p;
    for ( int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for ( int j = 0 ;j < n;j++){
        p = find(arr,arr+j+1,arr[j]);
        if (p != arr+j && j != 0){
            cout<<"YES"<<endl;
        }
        else if (p == arr+j || j == 0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}