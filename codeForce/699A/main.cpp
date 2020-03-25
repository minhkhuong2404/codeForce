#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
	return (a < b);
}
int main()
{
	int n,time = 0;
	cin>>n;
	char sym[n];
	int coor[n],ans[100000] = {0};
	int* it;
	for ( int i = 0;i < n;i++){
		cin>>sym[i];
	}
	for ( int k = 0;k < n;k++){
		cin>>coor[k];
	}
	for ( int j = 0;j < (n-1);j++){
		if (sym[j+1] == 'L' && sym[j] == 'R'){
			ans[time] = (coor[j+1] - coor[j]) / 2;
			time += 1;
		}
	}
	if (time == 0){
		cout<<-1;
	}
	else {
		it = std::min_element(ans + 0,ans+time,comp);
		cout << *it;
	}
	return 0;
}
/*

7
LLRLRRL
4 6 10 28 30 32 36

 */