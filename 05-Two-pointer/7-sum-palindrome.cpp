// submission link:- https://www.geeksforgeeks.org/problems/sum-palindrome3857/1

// User function Template for C++
class Solution {
  public:
  
    int reverseNum(int n){
      int   rev = 0;
        while(n>0){
            rev = rev*10 + (n%10);
            n = n/10;
        }
        return rev;
    }
    
    
    bool isPalindrome(int n){
        return n == reverseNum(n);
    }
    
    
    int isSumPalindrome(int n) {
        // code here
        
        for(int i =0 ;i<5;i++){
            if(isPalindrome(n)) return n;
             n = n + reverseNum(n);
        }
        
        if(isPalindrome(n)) return n;
         return -1;
    }
};