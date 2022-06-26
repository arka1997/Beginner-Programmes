#include <iostream>
#include <vector>
using namespace std;
int top = -1;
class Stack{
    public:
    int pushStack(int arr[],int n, int pn1){
            if(top < n){
                arr[++top]=pn1;
                cout << "Element added" << "\n";
            }
            else
                cout << " Stack is ful, please empty stack" << "\n";
                return 0;
        }
        int popStack(int arr[],int n){
            if(top !=-1){
                arr[top] = 0;
                --top;
                cout << "Element deleted" << "\n";
            }
            else
                cout << "No elemnt to be deleted" << "\n";
                return 0;
        }
        int peekStack(int arr[],int n){
                if(top < 0)
                cout << "No eleemnt to be viewed" << "\n";
                return arr[top];
        }
};
int main(){
    
    Stack s1;
    int option, pn1,pn2;
    int n;
    cin >> n;
   int arr[n] = {0};
    while(1){
    cout << "Enter options:";
    cout << "1)push" << "\n" << "2)pop" << "\n" << "3)peek" << "\n" << "4)END" << "\n";
    cin >> option;
    if(option == 1){
        cin >> pn1;
        s1.pushStack(arr, n , pn1);
    }
    if(option == 2){
        s1.popStack(arr,n);
    }
    if(option == 3){
        cout << "PEEK ELEMENT:" << s1.peekStack(arr, n ) << "\n";
    }
    if(option == 4){
        break;
    }
    cout  << "New Array" << "\n";
    for(int i=0;i<n;i++){
         cout  << arr[i];
    }
    cout << "\n";
    }
}