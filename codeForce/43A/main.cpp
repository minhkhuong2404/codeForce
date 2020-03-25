#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ;
	int mid;
	cin>>n;
	set<string> team;
	string a[100];
	for ( int i = 0; i < n;i++){
		cin>>a[i];
		team.insert(a[i]);
	}
	sort(a,a+n);

	for (int j = 1; j < n;j++){
		if (a[j] != a[j-1]){
			mid = j;
		}
	}
	if ( mid > (floor(n/2) )){
		cout<<a[0];
	}
	else{
		cout<<a[n-1];
	}
	return 0;
}