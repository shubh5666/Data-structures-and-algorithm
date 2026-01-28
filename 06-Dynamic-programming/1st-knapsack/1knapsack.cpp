#include<iostream>
using namespace std;
  
int knapsack(int wt[],int val[],int W,int n){
    if(n==0 || W== 0){ // Base condition: No items left for pick or knapsack is full 
        return 0;
    }
    if(wt[n-1]<=W){
        return max(val[n-1] + knapsack(wt,val,W-wt[n-1],n-1), knapsack(wt,val,W,n-1));
    }
    else{
        return knapsack(wt,val,W,n-1);
    }
}



int main(){

    int wt[] = { 1,3,4,5};
    int val[] = {1,4,5,7};
    int W = 7;
    int n = sizeof(wt)/sizeof(wt[0]);
    cout<<knapsack(wt,val,W,n)<<endl;

}

    



 



// //memoization

// #include<iostream>
//  #include<cstring>
// using namespace std;
//  int t[101][1001];
// int knapsack(int val[],int wt[],int W,int n){
//     // base condition
//     if(n==0 || W==0){
//         return 0;
//     }
//     if(t[n][W]!= -1){
//         return t[n][W];
//     }
  
//     // choice  diagram
//     if(wt[n-1]<=W){
//         return t[n][W] =  max(val[n-1] + knapsack(val,wt,W-wt[n-1],n-1),
//                               knapsack(val,wt,W,n-1));
//     }

//     else{
//         return t[n][W]=knapsack(val,wt,W,n-1);
//     }
// }


// int main(){
//     memset(t,-1,sizeof(t));
//     int val[] ={3,2,1,5};
//     int wt[]={10,20,30,40};
//     int W = 30;
//     int n= sizeof(wt)/sizeof(wt[0]);

//     cout<<knapsack(val,wt,W,n);

// }