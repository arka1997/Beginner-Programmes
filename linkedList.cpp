#include <iostream>
using namespace std;
class Node{
    public:
    //declaring data variables
    int data;
    Node* next;//a pointer with datatype name same as class name  used to point the instance or objects of the same class type Node
    //create a constructor
    Node(){
        //initialising variables
        data = 0;
        next = null; // at first next will point to null, later it wil be used to point address
    }
    // parameterized constructor
    Node(int k, int d){
        data = d;
    }
int main(){
    int n;
    cin >> n;
    patterns obj;
    obj.pattern2(n);
    return 0;
}