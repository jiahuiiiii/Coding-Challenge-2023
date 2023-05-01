#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    while (n--) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int mn, mx;
    mn = *min_element(v.begin(), v.end());
    mx = *max_element(v.begin(), v.end());
    int c = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != mn && v[i] != mx) {
            v.erase(v.begin() + i);
            c++;
            i--;
        }
    }
    for (auto i: v) {
        cout << i << ' ';
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
