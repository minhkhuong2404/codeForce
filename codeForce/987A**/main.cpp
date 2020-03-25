#include <bits/stdc++.h>
using namespace std;

int main() {
	map <string,string> thanos ={{"green","Time"},{"yellow","Mind"},{"orange","Soul"},{"purple","Power"},{"red","Reality"},{"blue","Space"}};
	string s;
	int n;
    cin>>n;
    for ( ;n ;n--){
        cin>>s;
        thanos.erase(s);
    }
    cout<<thanos.size()<<endl;

    for ( auto i:thanos)cout<<i.second<<endl;
    return 0;
}