//  // Find the elements present or not.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {2,4,6,8,10,5,7};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int k = 10;
//     bool found = false;
    
//     for(int i=0;i<n;i++){
//         if(arr[i] == k){
//             cout<<"Element is found ";
//             found = true;
//             break;
//         }
//     }

//         if(!found){
//             cout<<"Elements not found";
//         }
    
// }





#include<bits/stdc++.h>
using namespace std;
int main(){
   

    
    int size;
    cout<<"Enter the size of array  : ";
    cin>> size;

    int arr[size];
    cout<<"The arrays are : ";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }



      int k;
      cout<<"Elements k are : ";
      cin>>k;

        bool found = false;
    for(int i=0;i<size;i++){
        if(arr[i] == k){
          cout<<"Element is found";

          found = true;
          break;
        }
        
    }

        if(!found){
            cout<<"Elements are not found";
        }

    }
    
