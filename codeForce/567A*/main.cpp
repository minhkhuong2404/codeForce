#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int c = 0,d = 0;
	for ( int i = 0; i < n;i++){
		cin>>a[i];
	}
	for ( int j = 0;j < n;j++){
		if (j == 0){
			c = abs(a[j+1] - a[j]);
			d = abs(a[j] - a[n-1]);
		}
		else if ( j == (n-1)){
			c = abs(a[j] - a[j-1]);
			d = abs(a[j] - a[0]);
		}
		else{
			c = min(abs(a[j] - a[j+1]), abs(a[j] - a[j-1]));
			d = max(abs(a[j] - a[n-1]), abs(a[j] - a[0]));
		}
		cout<<c<<" "<<d<<endl;
	}
	return 0;
}