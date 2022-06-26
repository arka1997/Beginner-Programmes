// EnQueue: Adds an item to the queue. Addition of an item to the queue is always done at the rear of the queue.
// DeQueue: Removes an item from the queue. An item is removed or de-queued always from the front of the queue.
// isEmpty: Checks if the queue is empty.
// isFull: Checks if the queue is full.
// peek: Gets an element at the front of the queue without removing it.
#include <iostream>
#include <vector>
using namespace std;
class Queue{
    public:
    int f,r;
    Queue(){
        f=-1;
        r= 0;
    }
    int boolIsFull(int n){
        if(r==n-1){
            return true;
        }
        return false;
    }
    int boolIsEmpty(int n){
        if(r < n-1){
            return true;
        }
        return false;
    }
    void QueuePushOperations(int arr[], int n, int val){
        if(r < n-1){
            arr[r++] = val;
        }
        else{
            cout << "Overflow";
        }
    }
    void QueuePopOperations(int arr[]){
        if(f<r){
            cout << arr[f++];
            arr[f++] = 0;
        }
        else{
            cout << "Undeflow";
        }
    }
    int QueueViewFront(int arr[]){
        cout << "front index" << f << "\n";
        cout << "rear index" << r << "\n";
        return arr[f];
    }
    void displayqueue(int arr[], int n){
        cout << "Displaying elements";
        for(int i=f;i<=r;i++){
            cout << arr[i];
        }
    }
};
int main(){
Queue obj;
int n,val,option;
cin >> n;
int arr[n] = {0};
    while(1){
    cout << "Enter options:";
    cout << "1)boolIsFull" << "\n" << "2)boolIsEmpty" << "\n" << "3)QueuePush" << "\n" << "4)QueuePop" << "\n" << "5)QueueViewFront" << "\n" << "6)Displayqueue" << "\n" << "7)END" << "\n";
    cin >> option;
    if(option == 1){
        obj.boolIsFull(n);
    }
    if(option == 2){
        obj.boolIsEmpty(n);
    }
    if(option == 3){
        cin >> val;
        obj.QueuePushOperations(arr, n , val);
    }
    if(option == 4){
        obj.QueuePopOperations(arr);
    }
    if(option == 5){
        cout << "PEEK ELEMENT:" << obj.QueueViewFront(arr ) << "\n";
    }
    if(option == 6){
        obj.displayqueue(arr,n);
    }
    if(option == 7){
        break;
    }
    for(int i=0;i<n;i++){
         cout  << arr[i] << ",";
    }
}
}