#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,ans = 0;
	cin>>n>>a;
	int *arr ;
	arr = new int[2*n+1];
	for (int i = 1 ; i <= n;i++){
		cin>>arr[i];
	}
	if (arr[a] == 1){
		ans += 1;
	}

	for (int j = 1; j <= max(n-a,a-1); j++) {
		if (a - j < 1 ){
			arr[a-j] = 0;
		} else if (a+j > n){
			arr[a+j] = 0;
		}

		if ( (arr[a-j] == arr[a+j] ) && arr[a-j] == 1) {
			ans += 2;
		}
		else if ((a-j < 1 && arr[a+j]==1) || (a+j > n && arr[a-j]==1)) {
			ans += 1;
		}
	}
	cout<<ans;
	delete[] arr;
	return 0;
}
/*
20 17
1 1 0 1 1 1 1 0 1 0 1 1 1 0 1 1 0 0 0 0

 */