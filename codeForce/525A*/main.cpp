#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

string s;
cin>>s;

int keys[26]={0};
int buy = 0;

for(int i=0; i<s.size(); i+=2)
{
 char k=s[i],d=s[i+1];
//	cout<<keys[k-'a']<<" "<<keys[d-'A']<<endl;
 keys[k-'a']++;

 if(keys[d-'A']>0)
    keys[d-'A']--;
 else
    buy++;
}

cout<<buy;

}