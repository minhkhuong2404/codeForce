#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++){

		int a,b;cin>>a>>b;

		if(a==m||7-a==m||b==m||7-b==m)
			return cout<<"NO",0;
	}
	cout<<"YES",0;
}
