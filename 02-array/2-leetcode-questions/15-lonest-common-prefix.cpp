// Submission link:- https://leetcode.com/problems/longest-common-prefix/submissions/1916071567/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size() == 0) {
            return "";
        }
        
        string result = "";
        
        for(int i = 0; i < strs[0].length(); i++) {
            
            char current = strs[0][i];
            
            for(int j = 1; j < strs.size(); j++) {
                
                if(i >= strs[j].length() || strs[j][i] != current) {
                    return result;
                }
            }
            
            result = result + current;
        }
        
        return result;
    }
};
