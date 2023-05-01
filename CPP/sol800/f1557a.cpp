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
    double mx = v[0];
    double sum = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > mx) {
            mx = v[i];
        }
        sum += v[i];
    }
    cout << fixed << setprecision(10) << ((1.0 * (sum-mx)) / (v.size()-1)) + mx << '\n';
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