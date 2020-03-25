#include <bits/stdc++.h>
using namespace std;

int main()
{
	// f(a,1,N) + f(b,1,N) will be max
	// x OR y >= x;
	int n;
	cin>>n;
	int first[n],second[n];
	for (int i =0 ;i < n ;i++){
		cin>>first[i];
	}
	for (int i =0 ;i < n ;i++){
		cin>>second[i];
	}
	for ( int i = 0 ; i < n - 1;i++){
			first[0] |= first[i+1] ;
			second[0] |= second[i+1];
	}
	cout<<first[0]+second[0];
	return 0;
}