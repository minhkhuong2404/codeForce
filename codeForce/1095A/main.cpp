#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int index = 0;
    int gap = 1;
    while (index < n)
        cout << s[index], index += gap, gap++;
    return 0;
}