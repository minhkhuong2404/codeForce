#include <iostream>
#include <string.h>
using namespace std;

//void string(int n, int k);
int main() {
    int t;
    cin >> t;

    int n[t];
    int k[t];
    for (int j = 0; j < t; j++) {
        cin >> n[j] >> k[j]; // nhap vao do dai va so chu khac nhau
    }

    for (int j = 0; j < t; j++) {
        int div;
        char a = 'a';
        if (n[j] % k[j] != 0) {
            div = int(n[j] / k[j]) ;
//            cout<<div<<endl;
//            cout<<n[j]<<" "<<k[j]<<endl;
            for (int s = 1; s <= k[j]; s++) { // in ra các số div lần
                cout << string(div, a+s-1);
            }
            for (int m = 1; m <= (n[j] - (div*k[j])) ; m++) { // in ra các số bị sau khi đã
                cout << string (1, a + m - 1);
            }
            cout<<endl;
        }
        else {
            div = int(n[j] / k[j]);
//            cout<<div<<endl;
//            cout<<n[j]<<" "<<k[j]<<endl;
            for (int l = 1; l <= k[j]; l++) {
                cout << string(div, a+l-1);
            }
            cout<<endl;
        }

    }
    return 0;
}
