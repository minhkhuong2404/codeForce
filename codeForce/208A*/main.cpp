#include<bits/stdc++.h>
using namespace std;

string Str;

bool Check(int Index)
{
	if(Str[Index]=='W' && Str[Index+1]=='U' && Str[Index+2]=='B'){
		return true;
	}
	else
		return false;
}

int main()
{

	cin>>Str;
	int Length=Str.length(),j;
	for(int i=0;i<Length;){
		if(Check(i)){
			while(Check(i)){
				i=i+3;
			}
		}
		else{
			for(j=i;j<Length;j++){
				if(Check(j)){
					cout<<" ";
					i=j;
					break;
				}
				else{
					cout<<Str[j];
					i=j+1;
				}
			}
		}
	}
	return 0;
}