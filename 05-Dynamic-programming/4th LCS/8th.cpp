#include<iostream>  // minimum deletion in a string to make a palindrome.
#include<cstring>
#include<algorithm>
using namespace std;

int LCS(string &x,string &y,int m,int n ){
  int t[m+1][n+1];
   for(int i=0;i<m+1;i++)
   for(int j=0;j<n+1;j++)
  if(i==0 || j==0){
    t[i][j]=0;
  }


  for(int i=1;i<m+1;i++)
  for(int j=1;j<n+1;j++)

  if(x[i-1] ==  y[j-1]){
    t[i][j]= 1+ t[i-1][j-1];
  }
  else{
    t[i][j]= max(t[i-1][j],
           t[i][j-1]);
  }

   return t[m][n];
}

 int LPS(string x,int m){
     string y = x;
     reverse(y.begin(),y.end());
     return LCS(x,y,m,m);
 }

    int MDPCS(string x,int m){
       return m-LPS(x,m);
    }
    
 int main(){
    string x = "abcdgh";
    int m = x.length();
    cout<<MDPCS(x,m)<<endl;
 }