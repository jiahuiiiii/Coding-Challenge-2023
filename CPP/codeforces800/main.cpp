#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        v.push_back(i);
    }
    for (auto i: v) {
        cout << i << ' ';
    }
    cout << '\n';
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
