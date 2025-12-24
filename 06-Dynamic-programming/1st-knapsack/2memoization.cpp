
    //Memoization

  #include<iostream>
  #include<cstring>
  #include<algorithm>
  using namespace std;
    int t[102][1002];
   int knapsack(int wt[],int val[],int W,int n){
    if(n==0 || W==0)  // n==0 no items left for pick 
    return 0;       // base condition
     
     if(t[n][W]!= -1)
     return t[n][W];

   if(wt[n-1]<=W)
    return t[n][W] =  max(val[n-1] + knapsack(wt,val,W-wt[n-1],n-1),
                knapsack(wt,val,W,n-1));

   return t[n][W] = knapsack(wt,val,W,n-1);
   
}

int main(){
    memset(t,-1,sizeof(t));
    int wt[] = {2,3,4,15};  // weight of array
    int val[] = {4,6,1,6};   // array of value
    int W = 5;  // maximum weight the knapsack can hold
    int n = sizeof(wt)/sizeof(wt[0]); // size of number of items.
    

    cout<<knapsack(wt,val,W,n)<<endl;
}