#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k,t;
	cin >> n >> m >> k >> t;
	string s[4] = {"Carrots","Kiwis","Grapes","Waste"};
	pair<int,int> wasted[k];
	for(int i = 0;i<k;i++){
		int x,y;
		cin >> x >> y;
		wasted[i] = make_pair(x,y);
	}
	for(int i = 0;i<t;i++){
		int x,y;
		cin >> x >> y;
		int cnt = 0,w=0;
		for(int j = 0;j<k;j++){
			if(wasted[j].first < x || (wasted[j].first == x && wasted[j].second < y)){
				cnt++;
				// number of waste before
			}
			else if(wasted[j].first == x && wasted[j].second == y){
				cout << s[3] << endl;
				w=1;
				break;
			}
		}

		cout<<x<<" "<<m<<" "<<" "<<y<<" "<<cnt<<endl;

		int before = (x-1)*m + y - 1 - cnt; // not understand??
		if(!w)
			cout << s[before%3] << endl;
	}
	return 0;
}
/*
 *
4 5 5 6
4 3
1 3
3 3
2 5
3 2
1 3
1 4
2 3
2 4
3 1
4 2

 */