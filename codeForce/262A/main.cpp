#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, temp,count ,ans = 0;
	cin>>n>>k;
	int a[n];
	for (int i = 0; i < n;i++){
		cin>>a[i];
		count = 0;
		while (a[i] > 0){
			temp = a[i] % 10;
			if (temp == 4 || temp == 7){
				count++;
			}
			a[i] /= 10;
		}
		if (count <= k) ans += 1;
	}
	cout<<ans;
	return 0;
}