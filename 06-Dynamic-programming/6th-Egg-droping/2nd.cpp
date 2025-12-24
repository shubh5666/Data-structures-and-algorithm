// egg drop problems memoization
#include<bits/stdc++.h>
using namespace std;
 int t[1001][1001];
int solve(int e, int f) {
    // Base case: if we have 1 egg or 0 or 1 floor
    if (f == 0 || f == 1)
        return f;
    if (e == 1)  // If we have only one egg, we have to try every floor from 1 to f
        return f;
        if(t[e][f]!= -1){
            return t[e][f];
        }

    int mn = INT_MAX;

    // Try dropping from each floor from 1 to f
    for (int k = 1; k <= f; k++) {
        // Max represents the worst case scenario (egg breaks or doesn't break)
        int temp = 1 + max(solve(e - 1, k - 1), solve(e, f - k));
        mn = min(temp, mn);  // Keep track of the minimum trials required
    }

    return  t[e][f] = mn;
}

int main() {
    memset(t,-1,sizeof(t));
    int e = 3;  // Number of eggs
    int f = 5;  // Number of floors

    cout << solve(e, f) << endl;  // Print the minimum number of trials required
    return 0;
}
