#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,min = INT_MAX,count = 0,pos = 0;
	cin>>n;
	int arr[n];
	for (int i  =0 ; i <n ;i++){
		cin>>arr[i];
		if (arr[i] < min){
			min = arr[i];
			pos = i+1;
		}
	}
	for (int j =0 ; j < n;j++){
		if (arr[j] == min){
			count += 1;
		}
	}
	if (count >= 2){
		cout<<"Still Rozdil";
	}else{
		cout<<pos;
	}
	return 0;
}