#include <iostream>
#include <string>
using namespace std;

int countWays(string s, int k, bool isTrue) {
    int ans = 0;

    if (k == s.length()) {
        if (isTrue && s[k] == 'T')
            return 1;
        if (!isTrue && s[k] == 'F')
            return 1;
        return 0;
    }

    if (s[k] == '&') {
        if (isTrue) {
            ans += countWays(s, k + 1, true) * countWays(s, k + 2, true);
        } else {
            ans += countWays(s, k + 1, false) * countWays(s, k + 2, true) + 
                   countWays(s, k + 1, true) * countWays(s, k + 2, false) + 
                   countWays(s, k + 1, false) * countWays(s, k + 2, false);
        }
    } else if (s[k] == '|') {
        if (isTrue) {
            ans += countWays(s, k + 1, true) * countWays(s, k + 2, true) + 
                   countWays(s, k + 1, true) * countWays(s, k + 2, false) + 
                   countWays(s, k + 1, false) * countWays(s, k + 2, true);
        } else {
            ans += countWays(s, k + 1, false) * countWays(s, k + 2, false);
        }
    } else if (s[k] == '^') {
        if (isTrue) {
            ans += countWays(s, k + 1, true) * countWays(s, k + 2, false) + 
                   countWays(s, k + 1, false) * countWays(s, k + 2, true);
        } else {
            ans += countWays(s, k + 1, true) * countWays(s, k + 2, true) + 
                   countWays(s, k + 1, false) * countWays(s, k + 2, false);
        }
    }

    return ans;
}

int main() {
    string s = "T|T&F^T";
    bool isTrue = true;
    
    int result = countWays(s, 0, isTrue);
    cout << "The number of ways to parenthesize the expression to make it "
         << (isTrue ? "True" : "False") << " is: " << result << endl;
    
    return 0;
}
