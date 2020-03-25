#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,k;
	cin>>n>>k;
	if ( n < k){
		exit(0);
	}
	else {
		if (n%2==0) {
			if (k>floor(n/2)) {
				k = k-floor(n/2);
				k = k*2;
			}
			else {
				k = k*2-1;
			}
		}
		else {
			if (k>floor(n/2)+1) {
				k = k-floor(n/2)-1;
				k = k*2;
			}
			else {
				k = k*2-1;
			}
		}
	}
	cout<<k;
	return 0;
}