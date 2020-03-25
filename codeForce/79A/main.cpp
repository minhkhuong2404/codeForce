#include <iostream>
using namespace std;

int main()
{
	int x,y,cnt=0;
	cin >>x>>y;
	while (true){
		if(cnt%2==0){
			if(x>=2&&y>=2)x-=2,y-=2;
			else if(x>=1&&y>=12)x-=1,y-=12;
			else  if(y>=22)y-=22;
			else break;
		}
		else {
			if(y>=22)y-=22;
			else if(x>=1&&y>=12)x-=1,y-=12;
			else if(x>=2&&y>=2)x-=2,y-=2;
			else break;
		}
		cnt++;
	}
	if (cnt %2==1){
		cout << "Ciel";
	}
	else {
		cout << "Hanako";
	}
}

