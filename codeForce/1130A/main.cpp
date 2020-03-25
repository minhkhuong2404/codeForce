#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,pos  = 0,nega = 0,num;
	cin>>n;
	for ( int i = 0; i < n;i++){
		cin>>num;
		if (num > 0){
			pos += 1;
		}
		else if (num < 0){
			nega += 1;
		}
	}
	if (n % 2 != 0) {
		if (pos >= floor(n/2)+1) {
			cout << 1;
		}
		else if (nega >= floor(n/2)+1) {
			cout << -1;
		}
		else {
			cout << 0;
		}
	}
	else{
		if (pos >= n/2){
			cout<<1;
		}
		else if (nega >= n/2){
			cout<<-1;
		}
		else{
			cout<<0;
		}
	}

	return 0;
}