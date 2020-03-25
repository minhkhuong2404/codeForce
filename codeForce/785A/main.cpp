#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long sum = 0;
	string s;
	cin>>n;
	while (n-- > 0){
		cin>>s;
		if (s == "Tetrahedron"){
			sum += 4;
		}
		else if ( s == "Cube"){
			sum += 6;
		}
		else if (s == "Octahedron"){
			sum += 8;
		}
		else if (s == "Dodecahedron"){
			sum += 12;
		}
		else{
			sum += 20;
		}
	}
	cout<<sum;
	return 0;
}