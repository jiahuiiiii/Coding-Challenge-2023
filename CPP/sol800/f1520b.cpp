#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    ll n; cin >> n;
    int res = 0;
    /*
    if (n < 10) res = n;
    else if (n < 100) res = 9 + (n/11);
    else if (n < 1000) res = 9 + 9 + (n/111);
    else if (n < 10000) res = 9 + 9 + 9 + (n/1111);
    else if (n < 100000) res = 9 + 9 + 9 + 9 + (n/11111);
    */
    ll d = log10(n) + 1; // digit
    res += (d-1) * 9;
    ll div = 0; // divisor
    for (int i = 0; i < d; i++) {
        div += pow(10, i);
    }
    res += n/div;
    cout << res << '\n';
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
