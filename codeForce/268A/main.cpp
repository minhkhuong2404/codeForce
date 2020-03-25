#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,count = 0;
	cin>>n;
	int h[n],a[n];
	for ( int i = 0; i < n;i++){
		cin>>h[i]>>a[i];
	}
	for ( int i = 1; i < n;i++){
		for ( int k = 0;k < (n-i);k++){
			if (h[k] == a[i+k]){
				count += 1;
//				cout<<h[k]<<" * "<<a[i+k]<<endl;
			}

			if (a[k] == h[i+k]){
				count += 1;
//				cout<<a[k]<<" "<<h[i+k]<<endl;
			}
		}
	}
	cout<<count;
	return 0;
}
