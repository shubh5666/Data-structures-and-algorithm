// submission link:-https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/1869112198/

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>arr;

        while(ss>>word){

            int i = 0, j = word.size()-1;

            while(i<j){
                char  temp = word[i];
                word[i] = word[j];
                word[j] = temp;
                i++;
                j--;
            }

            arr.push_back(word);

        }
            
            string ans = "";
            for(int k  = 0;k <arr.size();k++){
                if(k>0) ans+=" ";
                ans+= arr[k];
            }

           
        

         return ans;
    }
};