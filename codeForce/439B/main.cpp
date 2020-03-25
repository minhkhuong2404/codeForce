#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long n,x,sum = 0;
	cin>>n>>x;
	unsigned long long arr[n];
	for (int i =0; i <n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for (int i =0; i <n;i++){
		sum += arr[i]*x;
		if (x > 1){
			x--;
		}
	}
	cout<<sum;
	return 0;
}