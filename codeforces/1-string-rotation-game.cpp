#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    string s;
    cin >> s;

    if (n == 0) {
        cout << 0 << "\n";
        return;
    }

    int transitions = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != s[(i + 1) % n]) {
            transitions++;
        }
    }

    int result = transitions + (transitions < n ? 1 : 0);
    cout << result << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}