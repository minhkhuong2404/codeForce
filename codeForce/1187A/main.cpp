#include <bits/stdc++.h>
using namespace std;

int distributeCandy(std::vector<int> age)
{
	// 1,2,9,8,7,6,5,10,3,2
	// 1+2+5+4+3+2+1+3+2+1 = 24
	int ans = 0,t = 1, top = 1;
	vector<int> temp(10001,1);
	age[0] = 1;
	for (int i = 1; i < age.size();i++){

		if (age[i] > age[i-1] && age[i] <= age[i+1]) {
			t++;
			temp[i] = t;
		}
		else if (age[i] > age[i-1] && age[i] > age[i+1]){
			top = 1;
			int l = i;
			while(age[l] > age[l+1] && l < age.size()-1) top++,l++;
//			cout<<top<<".";
			temp[i] = top;
		}
		else if ( age[i] < age[i-1] && age[i] > age[i+1]){
			top--;
			temp[i] = top;
		}
		else {
			t = 1;
			if (age[i] > age[i+1] && i < age.size()-1 ) t++;
			temp[i] = t;
		}
//		cout<<temp[i]<<" ";
	}
	for (int i = 0; i < age.size();i++){
		ans += temp[i];
//		 cout<<temp[i]<<" ";
	}
	return ans;
}

int main()
{
//	int T,n,s,t;
//	cin>>T;
//	for (int i = 0; i < T;i++){
//		cin>>n>>s>>t;
//		if (n == s && s == t) cout<<1<<endl;
//		else if (s == t && n < s + t)  cout<<n-s+1<<endl;
//		else if (s == t && n == s + t) cout<<s+1<<endl;
//		else if (s != t && n == s + t) cout<<max(s,t)+1<<endl;
//		else if (s != t && n < s + t)  cout<<n-min(s,t)+1<<endl;
//	}
//	return 0;
	vector<int> age = {1,2,9,8,7,6,5,10,3,2};
	//1+2+7+6+5+4+3+3+2+1 = 34
	cout<<distributeCandy(age);
}