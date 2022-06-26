#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Heap(){
int arr[1000];
int heap_index = -1;//this will be used to push values in tree, and will always be pointing at the lst node of the tree
    int siftUp(int i){
        if(greater == 0){
            return;
        }
     int parent = (i - 1)/2;//here i is the index of the elemnt to be inserted and parent variable holds the parent of "ith" index
        if(i > 1 && arr[i] > arr[parent]){ //if i > 1 means atleast the array should have 2 elemnts or index, then only we can check "i" of them and swap, if there is one elemnt, we do nothing as its the max only
            int temp = arr[parent];
            arr[parent] = arr[i];//now parent holds the current "i" value
            arr[i] = temp;
            i = parent;
        }
        siftUp(parent);
    }
    int siftDown(int i){
        int left = (2*i)+1;
        int right = (2*i)+2;
        int greater = i;
        if(left > i arr[greater] > arr[left]){
            greater = left;
        }
        if(arr[greater] > arr[right]){
            greater = right;
        }
        int temp = arr[i];
        arr[i] = arr[greater];
        arr[greater] = temp;
    }
    int Push(int val){
        arr[++heap_index] = val;//now we insert a person in a big IT company
        siftUp(heap_index);//now we will send his id to a function or accountant cell named  "shiftUp" to check what is his rank in IT, as per that we give him position, if he has maximum rank then he will be at the top of node, else wil b in intermediate or average level
    }  
    int Pop(int i){
        arr[0] = arr[heap_index-1];//now we insert a person in a big IT company
        heap_index--;
        siftDown(0);//now we will send his id to a function or accountant cell named  "shiftUp" to check what is his rank in IT, as per that we give him position, if he has maximum rank then he will be at the top of node, else wil b in intermediate or average level
    }  
}
int main(){
Heap obj;
if(option == "Push"){
int val;
cin >> val;//here we allowed a person as input to enter through our get and send him to main office named "ShiftUpShiftDown" through below function
obj.Push(val);
}
if(option == "Pop"){
cin >> val;//here we allowed a person as input to enter through our get and send him to main office named "ShiftUpShiftDown" through below function
obj.Pop();
}
}