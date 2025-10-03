// subset sum problem find yes/no

#include<iostream>
using namespace std;
int knapsack(int arr[] ,int sum,int n){
  bool t[n+1][sum+1];

  // initialization part
  for(int i=0;i<=n;i++)
   for(int j=0;j<=sum;j++){
   if(i==0)
     t[i][j] = false;
   if(j==0)
     t[i][j] = true;
   }

   // putting value in table
     for(int i=1;i<=n;i++)
       for(int j=1;j<=sum;j++){

         if(arr[i-1]<=j)
            t[i][j] = t[i][j-arr[i-1]] || t[i-1][j];
        else
            t[i][j] = t[i-1][j];
         }
    return t[n][sum];
    }

int main(){
  int arr[] = {4,6,2,4,8};
  int sum = 12;
  int n = sizeof(arr)/sizeof(arr[0]);

 if(knapsack(arr,sum,n))
 cout<<"Yes"<<endl;
else
cout<<"No"<<endl;

}