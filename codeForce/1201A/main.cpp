#include<bits/stdc++.h>
using namespace std;
int correct[1100][5];
int n,m;
int main(){
	cin >>n >>m;
	string s;
	for(int i=0;i<n;i++){
		cin >>s;
		for(int j=0;j<m;j++){
			correct[j][s[j]-'A']++;
			cout<<correct[j][s[j]-'A']<<endl;
		}
	}
	int ans=0;
	for(int i=0;i<m;i++){
		int w,highest=0;
		cin >>w;
		for(int j=0;j<5;j++){
			highest=max(highest,correct[i][j]);
			cout<<highest<<" ";
		}
		ans+=highest*w;
	}
	cout <<ans;
}
