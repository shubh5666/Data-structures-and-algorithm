#include<bits/stdc++.h>
using namespace std;

class MyStack {
    vector<int> v;

public:

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        if(v.size() == 0){
            cout << "Stack is empty" << endl;
            return;
        }
        v.pop_back();
    }

    int top(){
        if(v.size() == 0){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return v[v.size() - 1];
    }

    bool empty(){
        return v.size() == 0;
    }
};

void traverse(MyStack s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}

int main(){
    MyStack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    traverse(s);
}
