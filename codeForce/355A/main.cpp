#include <bits/stdc++.h>
using namespace std;

int main()
{
	string k,d;
	double sum = 0 ;
	cin>>k>>d;
	if (d == "0"){
		if (k == "1") {
			cout << 0;
		}
		else{
			cout<<"No solution";
		}
	} else{
//		sum = d*pow(10,k-1);
		sum = stoi(k);
		cout<<d<<string(sum - 1,'0');
	}

	return 0;
}