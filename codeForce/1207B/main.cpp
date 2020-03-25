#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,a[100][100],s;
int check(int i,int j){
	return (a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1]==4);
}
int main(){
	ios::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++) cin>>a[i][j];
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			if(a[i][j]) {
				if(check(i,j)) s++;
				if(check(i,j)+check(i-1,j)+check(i,j-1)+check(i-1,j-1)==0){cout<<-1; return 0; }
			}
	cout<<s<<endl;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			if(check(i,j)) cout<<i<<" "<<j<<endl;
	return 0;
}