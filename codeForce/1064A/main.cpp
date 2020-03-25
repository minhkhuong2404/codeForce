#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int arr[3] = {a+b,b+c,a+c};
    int p = (a+b+c)/2;
    if ( ( ((sqrt (a * a + b * b)) == c) || ((sqrt (b * b + c * c)) == a) || ((sqrt (a * a + c * c)) == b)) || (a == b && a==c) || (sqrt(p*(p-a)*(p-b)*(p-c))) > 0) {
        cout<<0;
    }
    else {
        cout << max (max (a, b), max (b, c)) - *min_element (arr, arr + 3) + 1;
    }
    return 0;
}