#include <iostream>
using namespace std;
void quicksort(int arr[], int l, int r);
int main(){
    int r;
    cin >> r;
    int arr[r];
    for(int i=0; i< r; i++){
        cin >> arr[i];
    }
    quicksort(arr, 0 , r);
    for(int k=0;k<r; k++){
        cout << arr[k];
    }
}
int partition(int arr[], int l , int r){
        int i = l;//a variable to hold the first index of every array, which is l in every sub array
        //if we used a "0" instead of "l", then i would have pointed to the first element and not l
        int pivot = l;//this is the pivot elemnet upon which the value will be partitioned, smaller numbers less then pivot, will be placed in front of it, and rest are placed back of it
        for(int j=l+1;j < r;j++){
            if(arr[j] < arr[l]){
                //if true
                i+=1;
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp; 
            }
    }
    //this is for the pivot elemnt w.r.t which we were sending numbrs less then the pivot, in front of pivot, and place the greater numbers after pivot
    //at last we sort the pivot elemnt with the minimum
    int temp = arr[i];
    arr[i] = arr[l];
    arr[l] = temp;
    return i;
}
void quicksort(int arr[], int l, int r){
    if(l<r){
        int pivIndex = partition( arr, l, r );
        // cout << pivIndex;
        quicksort(arr, l, pivIndex-1);
        quicksort(arr, pivIndex+1, r);
    } 
}