//  max no. of ways/count to find sum in a coins 

#include<iostream>
using namespace std;
int  countSubsets(int coin[] ,int sum,int n){
  int  t[n+1][sum+1];

  // initialization part
  for(int i=0;i<=n;i++){
   for(int j=0;j<=sum;j++){
   if(j==0)
     t[i][j] = 1;
   else if(i==0)
     t[i][j] = 0;
   }
  }

   // putting value in table
     for(int i=1;i<=n;i++){
       for(int j=1;j<=sum;j++){

         if(coin[i-1]<=j)
            t[i][j] = t[i-1][j] + t[i][j-coin[i-1]];
        else
            t[i][j] = t[i-1][j];
         }
    }
    return t[n][sum];
  }

 

int main(){
  int coin[] = {1,2,3};
  int n= sizeof(coin)/sizeof(coin[0]);
 int sum=5;
  cout<<"Number of subsets with sum "<<sum<<":"<<countSubsets(coin,sum,n)<<endl;

}