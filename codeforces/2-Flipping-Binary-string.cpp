#include <bits/stdc++.h>
using namespace std;
void run_test() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> ones, zeros;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ones.push_back(i + 1);
        } else {
            zeros.push_back(i + 1);
        }
    }

    int k_ones = ones.size();
    bool can_use_ones = true;
    for (int i = 0; i < n; i++) {
        int flips;
        if (s[i] == '1') flips = k_ones - 1;
        else flips = k_ones;

        if (s[i] == '1' && flips % 2 == 0) can_use_ones = false;
        if (s[i] == '0' && flips % 2 != 0) can_use_ones = false;
    }

    if (can_use_ones) {
        cout << k_ones << "\n";
        for (int i = 0; i < k_ones; i++) {
            cout << ones[i] << (i == k_ones - 1 ? "" : " ");
        }
        cout << "\n";
        return;
    }

    int k_zeros = zeros.size();
    bool can_use_zeros = true;
    for (int i = 0; i < n; i++) {
        int flips;
        if (s[i] == '0') flips = k_zeros - 1;
        else flips = k_zeros;

        if (s[i] == '1' && flips % 2 == 0) can_use_zeros = false;
        if (s[i] == '0' && flips % 2 != 0) can_use_zeros = false;
    }

    if (can_use_zeros) {
        cout << k_zeros << "\n";
        for (int i = 0; i < k_zeros; i++) {
            cout << zeros[i] << (i == k_zeros - 1 ? "" : " ");
        }
        cout << "\n";
        return;
    }

    cout << "-1\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            run_test();
        }
    }
    return 0;
}