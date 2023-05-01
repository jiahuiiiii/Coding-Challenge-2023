#include <bits/stdc++.h>
using namespace std;

void solve() {
    // S_n = 1+3+5+7+⋯+2n−1=n^2
    // Sum of n terms = n^2
    // n = sqrt(S_n)
    // number of terms = sqrt(s)
    // find the minimum number of terms so that n^2 > s, so use ceiling, or if u wanna loop also can
    int s;
    cin >> s;
    cout << ceil(sqrt(s)) << '\n';
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
