#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,count = 0;
	cin>>n;
	int first[n],last[n];
	for ( int i = 0; i < n;i++){
		cin>>first[i]>>last[i];
		if (first[i] != last[i]) {
			cout << "rated";
			exit(0);
		}
	}
	for ( int i = 1; i < n;i++){
		if (last[i] <= last[i-1]) {
			count += 1;
		}
	}
	if ( count == (n - 1)){
		cout<<"maybe";
	}
	else{
		cout<<"unrated";
	}
	return 0;
}