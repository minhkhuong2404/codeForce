#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long a[n];
	int size = sizeof(a)/sizeof(a[0]);
	for (int i = 0; i < n;i++){
		cin>>a[i];
	}
	sort(a,a+size);
	for (int i = 0; i < n-2;i++){
//		cout<<a[i]<<" "<<a[n-2]<<" "<<a[n-1]<<endl;
		if (a[i] + a[i+1] > a[i+2]){
			cout<<"YES"; return 0;
		}
	}
	cout<<"NO";
}