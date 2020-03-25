#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , ans = 0;
	cin>>n;
	int a[101], cnt[101] = {0};
	for (int i = 1; i <= n;i++){
		cin>>a[i];
		cnt[a[i]] = 1;
	}

	for (int i = 1; i <= 100;i++){
		if (cnt[i]){
			ans++;
			for (int j = i;j <= 100;j+=i){
				cnt[j] = 0;
			}
		}
	}
	cout<<ans;
	return 0;
}