#include <bits/stdc++.h>
using namespace std;
int smallest(int array[],int size);

int main() {
    int n,k,m;
    cin>>n>>k>>m;
    int arr[n];
    for (int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    while( k > 0){
        smallest(arr,n);
        k--;
    }
    return 0;
}
int smallest(int array[],int size){
    int smallest = array[0];
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

}