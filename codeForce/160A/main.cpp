#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int coin[n], sum = 0, k = 1 , m = 0;
	for ( int i = 0; i < n;i++){
		cin>>coin[i];
		sum += coin[i];
		m++;
	}
	sort(coin ,coin+n);

//	for ( int j = 0; j < n;j++){
//		cout<<coin[j]<<" ";
//	}
//	cout<<sum<<" "<<coin[m-1]<<" "<<m<<endl;

	int mine = coin[n-1];
	if ( mine > (sum - mine)){
		cout<<1;
		exit(0);
	}
	else{
		while ( mine <= ( sum - mine)){
			mine += coin[n-k-1];
			k++;
//			cout<<mine<<" "<<k<<endl;
		}
	}
	cout<<k;
	return 0;
}
/*
7
1 1 1 1 1 1 7
 */