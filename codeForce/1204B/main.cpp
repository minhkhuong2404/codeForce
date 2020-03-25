#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,l,r,Min = 0,Max = 0,temp = 1,diff = 0;
	cin>>n>>l>>r;
	for(int i = 0;i < l;i++){
		if (i == 0 ) Min += n - l + 1;
		else temp *= 2, Min += temp;
//		cout<<Min<<"*";
	}
	temp = 1;
	for (int i = 0; i < n;i++){
		if (i==0) {Max += temp,diff++;}
		else {
			if (diff == r) Max += temp;
			else {temp*= 2;Max += temp,diff++;}
		}
//		cout<<temp<<" "<<diff<<endl;
	}
	cout<<Min<<" "<<Max;
	return 0;
}