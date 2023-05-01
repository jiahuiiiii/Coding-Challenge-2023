#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int c1, c2, r;
    c1 = floor(n/3);
    c2 = c1;
    r = n % 3;
    if (r == 0) {
        cout << c1 << ' ' << c2 << '\n';
    } else if (r == 1) {
        cout << c1 + 1 << ' ' << c2 << '\n';
    } else if (r == 2) {
        cout << c1 << ' ' << c2 + 1 << '\n';
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
}
