#include <bits/stdc++.h>
using namespace std;

int main()
{
	long double n,m;
	cin>>n>>m;
	long double s = m / n;
	if ( n == m){
		cout<<0;
	} else if ( fmod(s, 2) == 0 || fmod(s, 3) == 0){
		int count = 0;
		s /= 2;
		while (floor(s)==ceil(s)) {
			s /= 2;
			count++;
		}
		s *= 2;
		s /= 3;
		while (floor(s)==ceil(s)) {
			s /= 3;
			count++;
		}
		s *= 3;
		if ( s == 1) {
			cout << count;
		}else cout<<-1;
	}else {
		cout<<-1;
	}
	return 0;
}