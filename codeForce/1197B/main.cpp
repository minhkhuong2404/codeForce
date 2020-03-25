#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,maxx;
	cin>>n;
	vector<int> a(n);
	for (int i = 0; i < n;i++){
		cin>>a[i];
	}
	maxx = max_element(a.begin(),a.end())-a.begin();
	bool top = true;
	for (int i =0; i < maxx ;i++){
		top &= (a[i] < a[i+1]);
	}
	for (int j =maxx ; j < n-1 ;j++){
		top &= (a[j] > a[j+1]);
	}
	top ? cout<<"YES" : cout<<"NO";
	return 0;
}