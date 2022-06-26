#include <iostream>
using namespace std;
void printtail(int num);
void printhead(int num);
 int main(){
     int a;
     int sum=0;
     cin >> a;
    printtail(a);
    cout << "\n";
    printhead(a);
    }
    void printtail(int num){
        
        if(num>0){
             printtail(num-1);//tail recursion
            cout << num;
        }
    }  
    void printhead(int num){
        
        if(num>0){
            cout << num;
        }
         printhead(num-1);//tail recursion
    }   
    
    