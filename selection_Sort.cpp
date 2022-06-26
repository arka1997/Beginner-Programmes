#include <iostream>
using namespace std;
void selectionSort(int arr[], int n);
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    selectionSort(arr, n);
    for(int k=0;k<n;k++){
    cout << arr[k];
}
}
// this sort follows and algo where it picks the most minimum number and goes on storing in the "min" pointer, and when the array ends, it swaps the the most minimum number, with the arr[i] number element 
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;//we mark min=i because if we dont get any minimum value beyond this, then we will keep i index as the minimum element only, and we will swap ith elemnt with ithe elemnt only, so no change takes place
        int temp;
        int j=i+1;
        for(;j<n;j++){
            if(arr[j] < arr[j-1])
            {
                // min = arr[j];
                min = j;//if we get a minimum elemnt beyond i index (here Jth index), then we store it in min
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}