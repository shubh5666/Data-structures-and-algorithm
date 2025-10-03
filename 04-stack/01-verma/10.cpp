#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main() {
    vector<int> v = {100, 80, 60, 70, 60, 75, 85};
    stack<pair<int, int>> st;
    vector<int> ans;

    for (int i = 0; i <= v.size() - 1; i++) {
        if (st.size() == 0) {
            ans.push_back(-1);
        } 
        else if (st.size() > 0 && st.top().first > v[i]) {
            ans.push_back(st.top().second);
        } 
        else if (st.size() > 0 && st.top().first <= v[i]) {
            while (st.size() > 0 && st.top().first <= v[i]) {
                st.pop();
            }
            if (st.size() == 0) {
                ans.push_back(-1);
            } 
            else {
                ans.push_back(st.top().second);
            }
        }
        st.push({v[i], i});
    }

    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == -1) {
            cout << "0 ";
        } 
        else {
            cout << i - ans[i] << " ";
        }
    }

    return 0;
}
