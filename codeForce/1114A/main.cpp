#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,z,a,b,c;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    if ( x <= a && ( y <= a+b+x) && (z<= a+b+c-y-x)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

//    if ( a < x){
//        cout<<"NO";
//    }
//    else if (a == x ){
//        if ( b >= y){
//            if (c >= z){
//                cout<<"YES";
//            }
//            else{
//                cout<<"NO";
//            }
//        }
//        else {
//            cout << "NO";
//        }
//    }
//    else {
//        y = y - (a - x);
//        if (y > 0) {
//            y = y - b;
//            if (y == 0) {
//                if (c >= z) {
//                    cout << "YES";
//                } else {
//                    cout << "NO";
//                }
//            }
//            else if (y > 0) {
//                cout << "NO";
//            }
//            else if (y < 0) {
//                if ( ( b +  abs (y) + c) >= z) {
//                    cout << "YES";
//                } else {
//                    cout << "NO";
//                }
//
//            } else if (y == 0) {
//                if ((b + c) > z) {
//                    cout << "YES";
//                } else {
//                    cout << "NO";
//                }
//            }
//        }
//    }
    return 0;
}
/*
90 70 100
100 60 100
 */