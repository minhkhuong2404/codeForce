#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,ans =0;
	cin>>n>>k;
	int arr[2*n+1];
	for ( int i = 0; i < 2*n+1;i++){
		cin>>arr[i];

	}
	for ( int j = 1; j < 2*n+1;j += 2){
		if ( ans == k){
			break;
		}
		else{
			if ((arr[j] - arr[j-1]) > 1 && (arr[j] - arr[j+1]) > 1){
				arr[j] -= 1;
				ans += 1;
			}
		}
	}
	for ( int j = 0; j < 2*n+1;j++){
		cout<<arr[j]<<" ";
	}
	return 0;
}