//#include <bits/stdc++.h>
//using namespace std;
//int gcd(int a, int b);
//
//int findlcm(int arr[], int n);
//int main() {
////    int n, a, b;
////    cin >> n;
////    int l1[n], r1[n], l2[n], r2[n];
////    for (int i = 0; i < n; i++) {
////        cin >> l1[i] >> r1[i] >> l2[i] >> r2[i];
////    }
////    srand (time (NULL));
////    for (int i = 0; i < n; i++) {
////        do {
////            a = rand () % (r1[i] + 1 - l1[i]) + l1[i];
////            b = rand () % (r2[i] + 1 - l2[i]) + l2[i];
////        } while (a == b);
////        cout << a << " " << b << endl;
////    }
//
//    int n,*x,*y;
//    int k =0;
//    int max1 = 0;
//    cin>>n;
//    int arr[n];
//    int dup[n];
//    for(int i = 0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i = 0; i < n; i++) {
//        if (arr[i] > max1) {
//            *y = max1;
//        }
//    }
//    for(int i = 0; i < n; i++){
//        for(int j = i+1; j < n; j++){
//            if(arr[i] == arr[j]){
//                dup[k] = arr[i];
//                k++;
//            }
//        }
//    }
//    int m = sizeof(dup) / sizeof(dup[0]);
//    *x = findlcm(dup,m);
//    cout<<&x<<" "<<&y<<endl;
//
//    return 0;
//}
//int gcd(int a, int b)
//{
//    if (b == 0)
//        return a;
//    return gcd(b, a % b);
//}
//
//// Returns LCM of array elements
//int findlcm(int arr[], int n)
//{
//    // Initialize result
//    int ans = arr[0];
//
//    for (int i = 1; i < n; i++)
//        ans = (((arr[i] * ans)) /
//               (gcd(arr[i], ans)));
//
//    return ans;
//}

#include<stdio.h>

int main(void)
{
    int side1, side2, hyp, counter = 1;
    printf("Number  SideOne  SideTwo  Hypotenuse");
    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = 1; side2 <= 500; side2++) {
            for (hyp = 1; hyp <= 500; hyp++) {
                if ((side1 * side1) + (side2 * side2) == (hyp * hyp)) {
                    printf("%6d  %7d  %7d  %10d\n", counter, side1, side2,
                           hyp);
                    counter++;
                }
            }
        }
    }
    return 0;
}
