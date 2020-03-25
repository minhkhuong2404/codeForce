#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    long long n,ans;
    int a,b;
    cin>>q;
    for ( int i = 0; i < q;i++){
    	cin>>n>>a>>b;
    	ans = 0;
    	if ( n % 2 == 0){
    		if ( a <= b/2){
    			ans = a*n;
    		}
    		else{
    			ans = b*(n/2);
    		}
    	}
    	else {
    		if (a <= (b-1)/2){
    			ans = a*n;
    		}
    		else{
    			ans = b*((n-1)/2) + a;
    		}
    	}
		cout<<ans<<endl;
    }
	return 0;
}