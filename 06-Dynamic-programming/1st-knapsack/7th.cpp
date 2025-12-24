// count subsets

#include<iostream>
using namespace std;
int  countSubsets(int arr[] ,int sum,int n){
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

         if(arr[i-1]<=j)
            t[i][j] = t[i-1][j] + t[i-1][j-arr[i-1]];
        else
            t[i][j] = t[i-1][j];
         }
    }
    return t[n][sum];
  }

 

int main(){
  int arr[] = {4,6,2,4,8};
  int n= sizeof(arr)/sizeof(arr[0]);
 int sum=10;
  cout<<"Number of subsets with sum "<<sum<<":"<<countSubsets(arr,sum,n)<<endl;

}