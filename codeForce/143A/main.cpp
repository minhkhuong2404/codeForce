#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r1,r2,c1,c2,d1,d2;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	for ( int i = 1; i <= 9 ;i++){
		for ( int j = 1;j <=9;j++){
			for ( int l = 1; l<=9 ;l++){
				for (int k = 1;k <=9;k++){
					if ( (i+j) == r1 && (l + k) == r2 && (i+l) == c1 && (j+k) == c2 && (i+k) == d1 && (j+l) == d2){
						if (i != j && i != l && i != k && j != l && j !=k && k != l ){
							cout<<i<<" "<<j<<endl;
							cout<<l<<" "<<k;
							exit(0);
						}
						else{
							cout<<-1;
							exit(0);
						}
					}
				}
			}
		}
	}
	cout<<-1;
	return 0;
}