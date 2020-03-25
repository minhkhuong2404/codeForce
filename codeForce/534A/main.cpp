#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,j = 0,k = 0;
	cin>>n;
	vector<int> even,odd;
	if ( n == 1 || n == 2){
		cout<<1<<endl<<1;
	} else if (n == 3 ){
		cout<<2<<endl<<1<<" "<<3;
	} else {
		cout<<n<<endl;
		for (int i = n ; i >= 1;i--){
			if ( i % 2 == 1){
				odd.push_back(i);
				cout<<odd[j]<<" ";
				j++;
			}else{
				even.push_back(i);
			}
		}
	}
	for (auto m = 0;m < even.size();m++){
		cout<<even[m]<<" ";
	}
	return 0;
}