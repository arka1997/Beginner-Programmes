#include <iostream>
#include <vector>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    int stack[10000];
    int minarr[10000];
    int top1;
    int top2;
    MinStack() {
        top1 = -1;
        top2 = -1;
    }
    
    void push(int val) {
        //4,8,0,2,2  4,
//enter in this "if" block when no elements are there in stack, and push items in both stack
        stack[++top1] = val;//whatever be the condition everytime our original stack wil b pushed with values, but minarr has some conditions to be followed before insertine
        //a) one is if top2 of minarr is -1 or empty, we push the first value without checking, as it is considered the minimum then
        //b)then if top2 >0, i.e., contains value, then next time we push a new elemnt in stack and when we go on to push in minarr stack, then we check if the current val is less or greater then the existing minimum elemnt in minarr. And then On basis of those conditions we insert values in min arr
        if(top2 == -1){
            minarr[++top2] = val;
        }
        
//enter in this block when stack array is not empty and the pushed value is smaller then the min elemnt in min minarr stack.
        else{
            if(val < minarr[top2]){
            minarr[++top2] = val;
        }
//when val is greater then existing top elemnt of minarr,then we insert the previous min element again.
            else{
                minarr[++top2] = minarr[top2];
            }
        }
    }
    
    void pop() {
        if(top2 < 0){
            return;
        }
            top1--;
            top2--;
    }
    
    int top(){
        return stack[top1];
    }
    
    int getMin() {
        return minarr[top2];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */