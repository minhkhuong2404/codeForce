#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,min = INT_MAX,ans = 0,index = 0;
	cin>>n>>k;
	int arr[2*n];
	for (int i  = 0;i < n;i++){
		cin>>arr[i];
		if (i == 0 || i == 1 || i == 2){
			ans += arr[i];
		}
	}
	for (int i  = 0; i <= n - k;i++){
		if (ans <= min){
			min = ans;
			index = i;
		}
		ans -= arr[i];
		ans += arr[i+k];
//		cout<<ans<<endl;
	}
	cout<<index+1;
	return 0;
}
/*
10 2
3 1 4 1 4 6 2 1 4 6
 */