#include<cstdio>
int a[100005],n,x;
int main() {
	for(scanf("%d",&n);n;) {
		scanf("%d",&x),a[x]=1;
		while(a[n]) printf("%d ",n--);
		puts("");
	}
	return 0;
}