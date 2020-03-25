#include <stdio.h>
#include <iostream>
#define MAX 100
using namespace std;
int a[MAX], n;
bool flag = false;

void sum0(int x, int sum){
    if ( x == n){
        if (!( sum % 360))
            flag = true;
        return;
    }
    sum0 (x + 1 , sum + a[x]);
    sum0 (x + 1 , sum - a[x]);

}
int main(){
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sum0(0, 0);

    cout << (flag ? "YES" : "NO");

    return 0;
}