#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,count = 0;
	cin>>n;
	double max1 = 0,ans = 0;
	double a[n];
	for(int i = 0 ; i < n ;i++){
		cin>>a[i];
	}
	cin>>m;
	double b[m];
	for(int i = 0 ; i < m ;i++){
		cin>>b[i];
	}

	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			ans = b[j]/a[i];
			if ( floor(ans) == ceil(ans) )
				if ( ans >= max1)
					max1 = ans;
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0; j<m; j++) {
			if (b[j]/a[i] == max1){
				count++;
			}
		}
	}
//	cout<<max1<<endl;
	cout<<count;
	return 0;
}
/*

10
5 21 22 23 25 32 35 36 38 39
10
3 7 8 9 18 21 23 24 36 38

 */