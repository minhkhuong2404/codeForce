#include <bits/stdc++.h>
#define PI 3.14159265358979323846
using namespace std;

int main()
{
	int d,h,v,e,t = 0;
	cin>>d>>h>>v>>e;
	double consume = 4*v/(PI*pow(d,2));
	if (consume <= e ){
		cout<<"NO";
	}else{
		cout<<"YES"<<endl;
		cout<<fixed;
		cout<<setprecision(12)<<h/(consume - e);
	}
	return 0;
}