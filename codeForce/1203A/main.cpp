#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q,n, p[201] = {0},cnt, mark ;
	cin>>q;
	while (q--){
		cin>>n;
		cnt = 0, mark =0;
		for(int i = 0; i < n;i++){
			cin>>p[i];
		}
		for(int i = 1;i < n;i++){
			if (abs(p[i] - p[i-1]) == 1)
				cnt++;
			else if (abs(p[i] - p[i-1]) == n-1) // big
				mark++;
		}
		if ( (cnt == n-2 && mark == 1) || n == 1 || cnt == n-1){
			cout<<"YES\n";
		}else cout<<"NO\n";
//		cout<<cnt<<" "<<mark<<endl;
	}
	return 0;
}