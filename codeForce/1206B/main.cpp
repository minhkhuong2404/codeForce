#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,balance = 0,zero = 0;
	cin>>n;
	long long count = 0;
	int a[n];

	for(int i = 0; i < n;i++){
		cin>>a[i];
		if (a[i] == 0) ++zero;
		else if (a[i] < 0) {
			count += -a[i] - 1;
			++balance;
		}
		else {
			count += a[i] - 1;
		}
	}
//	cout<<zero<<" "<<!zero<<endl;
	if (balance % 2 == 1 && !zero){
		count+=2;
	}
	cout<<count + zero;
	return 0;
}