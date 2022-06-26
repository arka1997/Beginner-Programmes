// // 1)1st problem, find max number from an array [5,3,4,1], max = 5;
// // 2)find the square of numbers using recursion 2^x
// // 3)no of steps to be taken , maximum of 1 or two, step(5) = step(4)+ step(3), step(4) = step(3) + step(2);
#include <iostream>
using namespace std;
int max(int arr[],int n);
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxval=0;
    cout << max(arr,n);
}
int max(int arr[],int n){
    if(n == 1){ 
        return arr[n];
    }
    
    int bb = max(arr,n-1);
    
    return bb > arr[n-1] ? bb : arr[n-1];
}

// #include <iostream>
// using namespace std;
// int max(int arr[],int n);
// int recursemax(int x , int y);
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << "Max number is:" << max(arr,n);
// }
// int max(int arr[],int n){
//     if(n == 1){ 
//         return arr[n];
//     }
//     return recursemax(max(arr,n-1),arr[n-1]);
    
// }
// int recursemax(int x , int y){
//     return (x>y) ? x : y;
// }