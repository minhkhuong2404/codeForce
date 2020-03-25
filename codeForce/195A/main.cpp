#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int u = ceil(float(a*c)/b);
	cout << u-c;
}