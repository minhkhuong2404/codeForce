#include <iostream>

// not finished yet
// please do it!!!

using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for ( int i = 0; i < n;i++){
        cin>>a[i];
    }
    int sum = 0;
    for ( int k = 0;k < n/2 ;k++) {
        int min = INT_MAX;
        for (int j = k + 1; j < n ; j++) {
            if (abs(a[k]-a[j]) < min) {
                min = abs(a[k]-a[j]);
            }
        }
        sum += min;
        cout<<sum<<endl;
    }
    cout<<sum;
    return 0;
}