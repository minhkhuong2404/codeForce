#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int main(){
	cin>>n>>s;
	for(int i=0;i<n;i++){
		if(s[i]!='.'){
			if(s[i]=='R'){
				while(s[i]=='R'){
					i++;
				}
				return cout<<i<<" "<<i+1,0;
			}
			else{
				return cout<<i+1<<" "<<i,0;
			}
		}
	}
}