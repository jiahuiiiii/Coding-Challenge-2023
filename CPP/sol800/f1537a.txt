#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    int f = n;
    int sum = 0;
    while (f--) {
        int temp;
        cin >> temp;
        v.push_back(temp);
        sum += temp;
    }
    int diff;
    if (sum == n) {
        diff = 0;
    }
    else if (sum > 0 && sum > n) {
        diff = sum - n*1;
    } else {
        diff = 1;
    }
    cout << diff << '\n';
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
