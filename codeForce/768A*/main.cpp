#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,c = 0,d= 0,mx = INT_MIN, mn = INT_MAX;
	cin>>n;
	int a[n];
	for ( int i = 0; i < n;i++){
		cin>>a[i];
		mn = min(mn,a[i]), mx = max(mx,a[i]);
	}
	for ( int j =0 ; j < n;j++){
		if (a[j] == mn)c++;
		if (a[j] == mx)d++;
	}
	if (mx == mn){
		cout<<0;
	}
	else{
		cout<<n-c-d;
	}
	return 0;
}