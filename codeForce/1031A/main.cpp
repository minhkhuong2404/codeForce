#include <bits/stdc++.h>
using namespace std;

int main() {
    int w,h,k;
    cin>>w>>h>>k;
    int sum=0;
    if ( k == 1){
        cout<<w*h-(w-2)*(h-2);
    }
    else{
        for ( int i = 2;i <= k;i++){
            sum += (w-4*(i-1))*(h-4*(i-1)) - (w-4*(i-1) -2)*(h-4*(i-1) -2);
        }
        cout<<w*h-(w-2)*(h-2)+sum;
    }
    return 0;
}