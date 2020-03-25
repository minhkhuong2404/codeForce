#include <bits/stdc++.h>
using namespace std;

int main() {
    int b,k,l;
    long double sum = 0;

    cin>>b>>k;
    l = k ;
    int a[k];
    if ( (b <= 100 && b >= 2) && (k >= 1 && k <= powl(10,5)) ) {
        if (k == 1) {
            cin >> a[0];
            if (a[0] < b && a[0] >= 0) {
                if (a[0] % 2 == 0) {
                    cout << "even";
                } else {
                    cout << "odd";
                }
            }
        } else {
            for (int i = 0; i < k; i++) {
                cin >> a[i];
                if (a[i] < b && a[i] > 0 && a[0] != 0) {
                    sum += a[i] * powl (b, l - 1);
                    l--;
                }
            }
            if (fmodl (sum, 2.0) == 0) {
                cout << "even";
            } else {
                cout << "odd";
            }
        }
    }
    return 0;

}