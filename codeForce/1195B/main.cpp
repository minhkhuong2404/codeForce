#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,t = 0,i = 1,ans = 0;
	cin>>n>>k;
	while(n-- > 0){
		if (t > k){
			t -= 1;
			ans++;
		} else{
			t += i;
			i++;
		}
//		cout<<t<<" "<<ans<<endl;
	}
	cout<<ans<<endl;
	return 0;
}