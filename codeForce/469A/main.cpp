#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,p,q;
	cin>>n;
	cin>>p;
	int a[p];
	set<int> num;
	for ( int i = 0; i < p;i++){
		cin>>a[i];
		num.insert(a[i]);
	}
	cin>>q;
	int b[q];
	for ( int i = 0; i < q;i++){
		cin>>b[i];
		num.insert(b[i]);
	}
	if (num.size() == n){
		cout<<"I become the guy.";
	}
	else{
		cout<<"Oh, my keyboard!";

	}
	return 0;
}