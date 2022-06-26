#include <iostream>
using namespace std;
void bubblesort(int arr[], int n);
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bubblesort(arr, n);
    for(int k=0;k<n;k++){
    cout << arr[k];
}
}
// RECURSION SORT
void bubblesort(int arr[], int n){
    int temp =0;
    if(n <= 0){
            
            return;
        }
for(int i = 0; i<n-1;i++){
    if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
    }
        
}bubblesort(arr, n-1); 
}

// another way of bubble sort
// void insertionsort(int arr[], int n){
//     int key=0;
//     for(int i = 1; i<n;i++){
//         for(int j=i-1;j>=0;j--){
//             if(arr[j] > arr[j+1]){
//                 key = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = key;
//             }
//         }
//     }
// }

