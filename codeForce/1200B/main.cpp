#include<bits/stdc++.h>
using namespace std;
int T,n,m,k,a,h;
bool b;
int main(){
	cin>>T;
	while(T--){
		b=true;
		cin>>n>>m>>k>>h;
		while(--n){
			a=h;
			cin>>h;
			if(a - max(0,h-k) < -m) b=false;
			m += a - max(0,h-k);
			cout<<m<<" "<<max(0,h-k)<<" "<<a<<endl;
		}
		puts(b?"YES":"NO");
	}
}