#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v={2,3,4,5,1,100};
v.erase(v.begin()+2,v.end()); // used to erase the element from 2nd index
v.insert(v.begin()+1,200);  // to insert
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// cout<<v.size()<<endl;// for size
// cout<<v.capacity()<<endl;  //for capacity
// cout<<v.front()<<endl;     // add element from starting
// cout<<v.back();      // add element from back
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<"  ";
  }


}
