#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a[n],ans = 0;
	for (int i = 0; i < n;i++){
		cin>>a[i];
	}
	ans += a[n-1];
	for(int i = n - 1 ;i > 0;i--){
		if (a[i-1] < a[i]){
			ans += a[i-1];
		}else {
			a[i-1] -= (a[i-1] - a[i] + 1);
			if (a[i-1] < 0){
				a[i-1] = 0;
			}
			ans += a[i-1];
		}
//		cout<<ans<<endl;
	}
	cout<<ans;
	return 0;
}