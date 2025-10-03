// LCS(least common subsequences)->length of common
  // recursive approach
#include<iostream>
using namespace std;
 
int LCS(string x,string y,int m,int n ){

  if(n==0 || m==0){
    return 0;
  }
  if(x[n-1] ==  y[m-1]){
    return 1+ LCS(x,y,m-1,n-1);
  }
  else{
    return max(LCS(x,y,m-1,n),
           LCS(x,y,m,n-1));
  }


}
 int main(){
    string x = "abcdgh";
    string y = "abedfhr";
    int n = x.length();
    int m = y.length();
    cout<<LCS(x,y,n,m);
 }