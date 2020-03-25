#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,ans = 0;
	cin>>n;
	int x[n+1] ;
	for (int i = 0; i < n;i++){
		cin>>x[i];
		if (x[i] % 2 == 0){
			ans++;
		}
	}

	cout<<min(ans,n-ans);
	return 0;
}