#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n = 4;
    vector<int> v;
    while (n--) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int m1, m2;
    m1 = max(v[0], v[1]);
    m2 = max(v[2], v[3]);
    sort(v.begin(), v.end());
    if ((m1 == v[2] || m1 == v[3]) && (m2 == v[2] || m2 == v[3])) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
