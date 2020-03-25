#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x[n],y[n],z[n];
	int a = 0,b = 0,c = 0;
	for ( int i = 0 ;i < n ;i++){
		cin>>x[i]>>y[i]>>z[i];
		a += x[i];
		b += y[i];
		c += z[i];
	}
	if ( a ==  0 && b == 0 && c == 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}