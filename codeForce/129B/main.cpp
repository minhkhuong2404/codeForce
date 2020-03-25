#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int tied[n+1][n+1];
	int tn[n+1];
	for(int i=1;i < n+1;i++){
		tn[i]=0;
		for(int j=1;j < n+1;j++) tied[i][j]=0;
	}
	for(int i=0;i < m;i++){
		int x,y;
		cin>>x>>y;
		tied[x][y]=1, tied[y][x]=1;
		tn[y]++, tn[x]++;
	}
	int ans=0;
	while(true){
		int n1=0;
		vector<int>r;
		for(int i=1;i <= n;i++) if(tn[i]==1){
			r.push_back(i);
			n1++;
			tn[i]=-1;
		}
		if(n1==0){
			cout<<ans<<endl;
			return 0;
		}
		ans++;
		for(int j=0;j < n1;j++) for(int k=1;k <= n;k++) if(tied[k][r[j]]==1)tn[k]--;
	}
}