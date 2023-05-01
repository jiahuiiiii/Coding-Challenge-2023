#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &e: v) {
        cin >> e;
    }
    int mn, mx;
    mn = min_element(v.begin(), v.end()) - v.begin();
    mx = max_element(v.begin(), v.end()) - v.begin();
    vector<int> res = {max(mn, mx) + 1, n - min(mn, mx), mn + 1 + n - mx, mx + 1 + n - mn};
    // int c = min(res); // won't work unless u pass in a vector directly : min({a, b, c, d})
    // int c = min_element(res.begin(), res.end()) - res.begin(); //output index
    int c = *min_element(res.begin(), res.end()); //output value
    cout << c << '\n';
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
