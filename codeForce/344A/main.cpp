#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,count = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i<n; i++) {
		cin >> arr[i];

	}
	for (int j = 1; j <= n; j++) {
		if (arr[j] != arr[j-1]) {
			count += 1;
		}

	}
	cout<<count;
	return 0;
}