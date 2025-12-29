// submission link:- https://leetcode.com/problems/reverse-words-in-a-string/submissions/1868525815/

class Solution {
public:
    string reverseWords(string s) {
        vector<string>arr;
        string word;
        stringstream ss(s);

        while(ss>>word){
            arr.push_back(word);
        }

        int i = 0, j = arr.size()-1;
        while(i<j){
            string  temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }

        string ans = "";
        for(int k = 0; k< arr.size();k++){
             if(k>0) ans += " ";
             ans+= arr[k];
        }

         return ans;
    }
};