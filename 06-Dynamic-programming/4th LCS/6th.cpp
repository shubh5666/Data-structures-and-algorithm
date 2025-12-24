#include<iostream>  //SCS(shortest common subsequence)
#include<cstring>
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
   
  int SCS(string x,string y,int m,int n){
    int lcs_length = LCS(x,y,m,n);
    return m+n - lcs_length;
  }

 int main(){
    string x = "abcdgh";
    string y = "abedfhr";
    int n = x.length();
    int m = y.length();
    cout<<SCS(x,y,m,n)<<endl;
 }