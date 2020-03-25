#include <iostream>
using namespace std;
int main() {
    int w,h,u1,d1,u2,d2,r;
    cin>>w>>h;
    cin>>u1>>d1;
    cin>>u2>>d2;
    r = w+h;
    if (h == d1) {
        r = r - u1;
    }
    else if (h == d2){
        r = r - u2;
    }
    if ( r < 0){
        r =  0;
    }
    while ( h != 0){
        h--;
        r += h;
        if (d1 == h && u1 > 0) {
            r -= u1;
        }
        else if ( d2 == h && u2 > 0){
            r -= u2;
        }
        if ( r <0 ){
            r = 0;
        }
    }

    cout<<r;
    return 0;
}
