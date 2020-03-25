#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k,sum = 0 ,m = 1;
	cin>>k;
	int arr[12];
	for ( int i = 0;i < 12;i++){
		cin>>arr[i];
	}
	if (k == 0){
		cout<<0;
		exit(0);
	}else {
		sort(arr, arr+12);
		while (m <= 12) {
			sum += arr[12-m];
			m++;
			if (sum >= k) {
				cout << m-1;
				exit(0);
			}
		}
		cout<<-1;
	}
	return 0;
}