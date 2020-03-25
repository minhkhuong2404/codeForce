#include <iostream>
using namespace std;

int main(){
  int n,k,sum=0;
  cin>>n>>k;
  for(int l,r;cin>>l>>r;sum += r-l+1);
  cout<<(k- sum % k) % k<<'\n';
}