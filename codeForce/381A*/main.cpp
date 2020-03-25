#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int l = 0, r = n -1 ;
	int s = 0,d = 0;
	for (int i = 0; i < n; i++) {
		cin>>a[i];
	}
	bool p = true;
	while (l<=r){
		if (a[l] >= a[r]){
			if (p) {
				s += a[l];
			}
			else {
				d += a[l];
			}
			l++;
		}
		else if ( a[l] < a[r]){
			if (p) {
				s += a[r];
			}
			else {
				d += a[r];
			}
			r--;
		}
		if (p){
			p =false;
		}
		else{
			p =true;
		}
	}
	cout<<s<<" "<<d;

	return 0;
}