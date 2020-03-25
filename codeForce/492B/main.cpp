#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,l;
	double ans = 0,diff = 0,min = 0;
	cin>>n>>l;
	double light[n];
	bool zero = false , end =false;
	for (int i = 0; i < n;i++){
		cin>>light[i];
		if (light[i] >= min){
			min = light[i];
		}
		if (light[i] == 0) zero = true;
		if (light[i] == l) end = true;
	}
	sort(light,light+n);
	for (int i = 1; i < n;i++){
		if ((light[i] - light[i-1]) > diff){
			diff = (light[i] - light[i-1]);
		}
	}
	if (!zero && !end)
		ans = max(max(diff/2,light[0]),max(diff/2,(l-light[n-1])));
	else if (!end && zero)
		ans = max(diff/2,(l-light[n-1]));
	else if (!zero && end){
		ans = max(diff/2,light[0]);
	} else{
		ans = diff/2;
	}

	cout<<fixed<<setprecision(10)<<ans;

	/*
	 * int n,l,i;
	cin>>n>>l;
	for (i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int m = 2 * max(a[0],l-a[n-1]);
	for (i=1;i<n;i++)
		m=max(a[i]-a[i-1],m);
	printf("%f",(float)m/2);

	 */

	return 0;
}