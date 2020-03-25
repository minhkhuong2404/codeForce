#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int rank=0;
    cin>>n;
    int a[n],b[n],c[n],d[n],sum[n];
    for ( int i = 0 ; i < n; i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        sum[i] = a[i] + b[i] + c[i] + d[i];
    }
    for ( int j = 0 ; j < n-1; j++){
//        sum[j] = a[j] + b[j] + c[j] + d[j];
//        cout<<sum[0]<<" "<<sum[j+1]<<endl;
        if ( sum[0] >= sum[j+1] ){
            rank += 1;
        }
    }
    cout<<n-rank;
    return 0;
}