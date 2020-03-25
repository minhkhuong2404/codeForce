#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int x[n],y[m];
    for ( int i = 0; i < n;i++){
        cin>>x[i];
    }

    for ( int j = 0; j < m;j++){
        cin>>y[j];
    }
    int *p;
    for ( int l = 0 ;l < n;l++){
        p = find( y , y+m, x[l]);
        if(p != y+m){
            cout<<*p<<' ';
        }
    }
    return 0;
}