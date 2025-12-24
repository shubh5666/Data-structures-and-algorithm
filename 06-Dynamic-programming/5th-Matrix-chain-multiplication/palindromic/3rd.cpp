#include <bits/stdc++.h>
using namespace std;

// Recursive function to check if 'a' can be scrambled to form 'b'
bool solve(string a, string b) {
    // If the strings are equal, no need to scramble
    if (a == b)
        return true;

    // If the strings have different lengths or any character is different, return false
    if (a.length() != b.length() || a.empty() || b.empty())
        return false;

    int n = a.length();

    // Check if the two strings are anagrams (i.e., they contain the same characters)
    string tempA = a;
    string tempB = b;
    sort(tempA.begin(), tempA.end());
    sort(tempB.begin(), tempB.end());
    if (tempA != tempB)
        return false;

    // Try all possible splits of the string
    for (int i = 1; i < n; i++) {
        // Case 1: The first part of a and b match, and the second part matches too
        if (solve(a.substr(0, i), b.substr(0, i)) && solve(a.substr(i, n - i), b.substr(i, n - i)))
            return true;

        // Case 2: The first part of a matches the second part of b, and the second part of a matches the first part of b
        if (solve(a.substr(0, i), b.substr(n - i, i)) && solve(a.substr(i, n - i), b.substr(0, n - i)))
            return true;
    }

    return false;  // If no valid scramble found
}

int main() {
    string a = "great";
    string b = "rgeat";

    if (solve(a, b))
        cout << "Yes, they are scrambled versions of each other." << endl;
    else
        cout << "No, they are not scrambled versions of each other." << endl;

    return 0;
}
