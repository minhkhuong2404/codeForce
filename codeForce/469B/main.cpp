#include <bits/stdc++.h>
#define rep(i,a,n) for(int i = a;i<=n;i++)
using namespace std;
const int DIM = 1e5 + 7;

bitset <DIM> Z;

pair <int, int> X[DIM];

int main()
{
	int p,q,l,r;
	cin>>p>>q>>l>>r;
	rep(i,1,p){
		int x,y;
		cin>>x>>y;
		rep(j,x,y)
			Z[j] = true;
	}
	rep(i,1,q){
		cin>>X[i].first>>X[i].second;
	}
	int ans = 0;
	rep(i,l,r){
		bool ok = false;
		rep(j,1,q){
			rep(z,X[j].first+i,X[j].second+i){
				if(Z[z] == true) ok = true;
			}
		}
		ans += ok;
	}
	cout<<ans;
	return 0;
}