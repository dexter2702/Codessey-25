#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
stack<int> inStack, outStack;
    MyQueue() {
        
    }
    
    void push(int x) {
        inStack.push(x);
    }
    
    int pop() {
        shiftStacks();
        int val = outStack.top();
        outStack.pop();
        return val;
    }
    
    int peek() {
        shiftStacks();
        return outStack.top();
    }
    
    bool empty() {
        return inStack.empty() && outStack.empty();
    }

    private:
    void shiftStacks(){
        if(outStack.empty()){
            while(!inStack.empty()){
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */