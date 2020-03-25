#include <iostream>
using namespace std;

void FindAllElements(int n, int k)
{
    int sum = k;

    // Initialising an array A with k elements
    // and filling all elements with 1
    int A[k];
    fill(A, A + k, 1);

    for (int i = k - 1; i >= 0; --i) {

        // Iterating A[] from k-1 to 0
        while (sum + A[i] <= n) {

            // Update sum and A[i]
            // till sum + A[i] is less than equal to n
            sum += A[i];
            A[i] *= 2;
        }
    }

    // Impossible to find the combination
    if (sum != n) {
        cout << "NO";
    }

        // Possible solution is stored in A[]
    else {
        cout <<"YES\n";
        for (int i = 0; i < k; ++i)
            cout << A[i] << ' ';
    }
}

int main()
{
    int n,k;
    cin>>n>>k;

    FindAllElements(n, k);

    return 0;
}