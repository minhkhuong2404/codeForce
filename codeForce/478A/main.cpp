#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	double ans = 0;
	for (int i = 0; i < 5;i++){
		cin>>a;
		ans += a;
	}
	if (floor(ans/5) == ceil(ans/5) ){
		if (ans/5 != 0)
			cout<<ans/5;
		else
			cout<<-1;
	}else{
		cout<<-1;
	}
	return 0;
}