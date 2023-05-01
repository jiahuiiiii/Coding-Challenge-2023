#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    int f = 2 * n;
    for (int i = 0; i < f; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int odd = 0, even = 0;
    for (int i = 0; i < f; i++) {
        if (v[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    // cout << odd << ' ' << even << ' ';
    if (odd == even) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
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
