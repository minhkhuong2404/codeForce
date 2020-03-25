#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,d,count = 0,ans = 0;
	cin>>n>>d;
	string a[d];
	for (int i = 0; i < d;i++){
		bool flag = false;
		cin>>a[i];
		for (int j = 0; j < n;j++){
			if (a[i][j] == '0'){
				flag = true;
			}
		}

		if (flag){
			count++;
		}else{
			count = 0;
		}
//		cout<<count<<" "<<ans<<endl;
		ans = max(count,ans);
	}
	cout<<ans;
	return 0;
}