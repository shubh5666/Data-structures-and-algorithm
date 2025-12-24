// memoization

#include<iostream>
#include<cstring>
using namespace std;
 int t[1001][1001];
int LCS(string &x,string &y,int m,int n ){

  if(n==0 || m==0){
    return 0;
  }
  if(t[m][n]!= -1){
   return  t[m][n];
  }
  if(x[m-1] ==  y[n-1]){
   return   t[m][n]= 1+ LCS(x,y,m-1,n-1);
  }
  else{
   return  t[n][m]= max(LCS(x,y,m-1,n),
           LCS(x,y,m,n-1));
  }


}
 int main(){
    memset(t,-1,sizeof(t));
    string x = "abcdgh";
    string y = "abedfhr";
    int n = x.length();
    int m = y.length();
    cout<<LCS(x,y,n,m);
 }