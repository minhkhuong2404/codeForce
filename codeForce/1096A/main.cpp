#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long x[n],y[n];
    for ( int i= 0; i < n;i++){
        cin>>x[i]>>y[i];
    }
    for ( int j = 0;j < n;j++){
        while((y[j] % x[j]) != 0){
            y[j]--;
        }
        cout<<x[j]<<" "<<y[j]<<endl;
    }
    return 0;
}