#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int num, n;
    cin >> num;
    ll c = 0;
    int i = 0;
    while (c != num) {
        i++;
        if (i % 3 != 0 && i % 10 != 3) {
            c++;
        }
    }
    cout << i << '\n';
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
