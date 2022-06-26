#include <iostream>
using namespace std;
void insertionsort(int arr[], int n);
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    insertionsort(arr, n);
    for(int k=0;k<n;k++){
    cout << arr[k];
}
}


void insertionsort(int arr[], int n){
    for(int i = 1; i<n;i++){
        int key = arr[i];
        int j=i-1;
         while(j>=0 && key < arr[j])  //in insertion if "key" is greater then previous number, when sorting starts,  then the loop doesnot continues, because key will only be greater then previous number if the previous values are already sorted
        {  
            arr[j+1] = arr[j]; 
            j = j-1; 
        }  
        arr[j+1]=key;
    }
}

