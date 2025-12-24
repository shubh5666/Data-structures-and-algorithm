#include <bits/stdc++.h>
using namespace std;    // memoization
int t[1001][1001];
bool ispalindrome(string s, int i, int j) {
   while(i<j){
    if(s[i]!= s[j]){
        return false;
    }
    i++;
    j--;
   }
    return true;
   
}

int solve(string &s, int i, int j) {
    if (i >= j) {
        return 0;
    }
    if (ispalindrome(s, i, j)) {
        return 0;
    }
    if(t[i][j]!= -1){
        return t[i][j];
    }
    int mn = INT_MAX;
    for (int k = i; k < j; k++) {
        int temp = solve(s, i, k) + solve(s, k + 1, j) + 1;
        if (temp < mn) {
            mn = temp;
        }
    }
    return  t[i][j] = mn;
}

int main() {
    memset(t,-1,sizeof(t));
    string s = "nitin";
    int n = s.length();
    int i = 0, j = n - 1;
    cout << solve(s, i, j) << endl;
}
