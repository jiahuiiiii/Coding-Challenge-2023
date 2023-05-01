#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    // prime number that is bigger or equal than 5 is always a even composite number
    ll p;
    cin >> p;
    cout << 2 << ' ' << p-1 << '\n';
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
