#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> cnt(m + 2);
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        ++cnt[l];
        --cnt[r + 1];

//        cout<<cnt[l]<<" "<<cnt[r+1]<<endl;
    }
    for (int i = 1; i <= m; ++i) {
//        cout<< cnt[i-1]<<"\t";
        cnt[i] += cnt[i - 1];
//        cout << cnt[i] << endl;
    }
    vector<int> ans;
    for (int i = 1; i <= m; ++i) {
        if (cnt[i] == 0)
            ans.push_back(i);
    }

    cout << ans.size() << endl;
    for (auto it : ans) cout << it << " ";
    cout << endl;

    return 0;
}
