// Find the largest elements 

// idea-1:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,5,3,8,4,10,16,13,11,9};
    int n = sizeof(arr)/sizeof(arr[0]);
//       sort(arr,arr + n);
//       int largest = arr[n-1];
//     cout<<"Largest element is :" <<arr[n-1]<<endl;




// int second;
//     for(int i = n-2;i<n;i++){
//         if(arr[i]!= largest){
//             second = arr[i];
//             break;
//         }
//     }

//     cout<<"Second largest element is : "<< arr[second]<<endl;




// }




// idea-2:

int largest = arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        largest = arr[i];
    }
   
}
 cout<<"Largest element is : "<<largest<<endl;

   int second = -1;
   for(int i=0;i<n;i++){
    if(arr[i]!= largest && arr[i]>second){
        second = arr[i];
    }
   }

   cout<<"Second largest element is : "<< second<<endl;


}