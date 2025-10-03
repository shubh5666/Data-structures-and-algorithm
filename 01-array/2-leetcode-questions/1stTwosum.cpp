// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter the size of an array ";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }



#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target :  ";
    cin>>target;
    for(int i=0;i<size;i++){
        for(int j=i+1;i<size;i++){
            if(arr[i]+arr[j]== target){
              cout<<arr[i]<<" "<<arr[j];
            }
        }
 
    }
 
    }
    