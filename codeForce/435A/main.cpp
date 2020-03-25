#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,ans = 0, count = 1,x;
	cin>>n>>m;
	for (int i = 0 ; i < n;i++){
		cin>>x;
		if (ans + x > m){
			count++;
			ans = x;
		} else{
			ans += x;
		}
//		cout<<ans<<" "<<x<<endl;
	}

	cout<<count;
	return 0;
}