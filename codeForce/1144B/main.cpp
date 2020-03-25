#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,even = 0, odd = 0,sum = 0,count = 0;
	cin>>n;
	int arr[n];
	for ( int i = 0; i < n;i++){
		cin>>arr[i];
		if (arr[i] % 2 == 0){
			even += 1;
		} else{
			odd += 1;
		}
	}
//	cout<<even<<" "<<odd<<endl;
	sort(arr,arr+n);
	if ( (even == odd + 1) || (odd == even + 1) || odd == even){
		cout<<sum;

	} else if ( even > odd + 1){
		for(int i = 0; i < n;i++){
			if (arr[i] % 2 == 0){
				sum += arr[i];
				count++;
			}
			if (count == even-odd-1){
				break;
			}
		}
		cout<<sum;

	} else if (odd > even + 1){
		for(int j =0; j < n;j++){
			if (arr[j] % 2 != 0){
				sum += arr[j];
				count++;
			}
			if (count == odd-even-1){
				break;
			}
		}
		cout<<sum;
	}
	return 0;
}
/*
6
1 3 4 6 8 10
 */