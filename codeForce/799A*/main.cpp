#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,k,d;
	// n tong so banh
	// k so banh nuong 1 lan
	// t thoi gian lam k banh
	// d thoi gian xay
	cin>>n>>t>>k>>d;

	// with one oven
	int cooked = 0;
	int time_one;
	for(int i = 1 ; ; i++)
	{
		if(i % t == 0)
		{
			cooked += k;
		}
		if(cooked >= n)
		{
			time_one = i;
			break;
		}
	}

	// with two oven
	int time_two ,sec = 0;
	cooked = 0;
	for ( int i = 1; ; i++) {
		if (i % t == 0 ) {
			cooked += k;
		}
		if (i == d ) {
			sec = i;
		}
		else {
			if ((i-sec) % t == 0) {
				cooked += k;
			}
		}
		if ( cooked >= n){
			time_two = i;
			break;
		}
	}
	if ( time_one > time_two){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}

	return 0;
}