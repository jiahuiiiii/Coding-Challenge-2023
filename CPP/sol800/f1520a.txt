#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    vector<char> temp;
    temp.push_back(s[0]);
    for (int i = 0; i < n-1; i++) {
        if (s[i] != s[i+1]) {
            if(count(temp.begin(), temp.end(), s[i+1])) {
                cout << "NO" << '\n';
                return;
            } else {
                temp.push_back(s[i+1]);
            }
        }

    }
    cout << "YES" << '\n';
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
