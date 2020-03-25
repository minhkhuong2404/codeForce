#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[4],count = 0;
	bool tr = false,seg = false;
	for (int & i : a){
		cin>>i;
	}
	sort(a,a+4);
	for (int i = 1;i < 3;i++){
		if ( (a[i-1] + a[i] > a[i+1] && a[i] + a[i+1] > a[i-1] && a[i-1] + a[i+1] > a[i]) || (a[i] == a[i-1] && a[i-1] == a[i+1])){
			tr = true;
		}
		else if (a[i-1] + a[i] == a[i+1] || a[i] + a[i+1] == a[i-1] || a[i-1] + a[i+1] == a[i]) {
			seg = true;
			count++;
		}

	}
	if ( (tr && seg) || tr ){
		cout<<"TRIANGLE";
	}else if ( seg && count >= 1){
		cout<<"SEGMENT";
	} else {
		cout<<"IMPOSSIBLE";
	}
	return 0;
}