#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, num, arr[4][5001],count[4] = {0}, w;
	cin >> n;

	for (int j = 1; j <= n; j++) {
		cin >> num;
		count[num] += 1;
		arr[num][count[num]] = j;
	}

	w = min(min(count[1],count[2]) , min(count[2],count[3]));
	cout<<w<<endl;

	for ( int i = 1; i <= w;i++){
		cout<<arr[1][i]<<" "<<arr[2][i]<<" "<<arr[3][i]<<endl;
	}
	return 0;
}