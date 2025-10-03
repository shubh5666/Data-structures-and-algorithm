
//rod cutting problems
#include<iostream>
using namespace std;


int knapsack(int price[],int length[],int N,int n){
  int t[n+1][N+1];
  for(int i=0;i<=n;i++){
    for(int j=0;j<=N;j++){
      if(i==0 || j==0){
        t[i][j] = 0;
      }
    }
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=N;j++){
      if(length[i-1]<=j){
        t[i][j] = max( price[i-1] + t[i][j-length[i-1]],
                       t[i-1][j]);
      }
      else{
        t[i][j] = t[i-1][j];
      }
  }
}
return t[n][N];
}





int main(){

  int price[]={3,5,1,8,6};
  int length[] = {10,30,20,40,60};
  int N = 30;
  
  int n =sizeof(length)/sizeof(length[0]);
  cout<<knapsack(price,length,N,n);

}