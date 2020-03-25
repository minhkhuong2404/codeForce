#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int need[3] = {2*n,5*n,8*n};
    int sum = 0;
    for ( int i = 0; i < 3;i++){
        for( int j = 1;j< INT_MAX;j++){
            if ( j*k >= need[i] ){
                sum+=j;
                break;
            }
        }
    }
    cout<<sum;
    return 0;
}