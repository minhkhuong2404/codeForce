#include <iostream>
using namespace std;
int main() {
    long long n,m,a;
    cin>>n>>m>>a;
    long long i ( ((m+a-1)/a)*((n+a-1)/a) );
    cout<< i<<endl;
}