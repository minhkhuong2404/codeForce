#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,num=0;
    string s;
    cin>>n;
    cin>>s;
    for ( int i = 0; i < n;i++){
        if (s[i] == 'A'){
            num +=1;
        }
    }
    if ( (n - num) > num){
        cout<<"Danik";
    }
    else if ( (n - num) < num){
        cout<<"Anton";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}