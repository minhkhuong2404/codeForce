#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<pair<int,int>> pos,neg;
int main (){
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i ++){
        int x,a;
        scanf("%d%d",&x,&a);
        if(x>0){
            pos.push_back({x,a});
        }
        else{
            neg.push_back({x*-1,a});
        }
    }
    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());
    auto s=min(pos.size(),neg.size());
    long long ans=0;
    for(size_t i = 0 ; i < s ; i ++){
        ans+=pos[i].second;
        ans+=neg[i].second;
    }
    if(pos.size()>s){
        ans+=pos[s].second;
    }
    if(neg.size()>s){
        ans+=neg[s].second;
    }
    printf("%lld\n",ans);

}