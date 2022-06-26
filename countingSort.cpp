#include <iostream>
using namespace std;
void countsort(int arr[], int n);
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i< n; i++){
        cin >> arr[i];
    }
    countsort(arr, n);
    for(int k=0;k<n; k++){
        cout << arr[k];
    }
}
void countsort(int arr[], int n){
    //we find max element in the array first
    int max = INT_MIN;
    for(int j=0; j< n; j++){
        if(arr[j] > max){
            max = arr[j];
        }
    }
    //here we are increasing the count of those index values in the count array, which is present in original array
    
    int count[max+1] = {0};
    // for(int m=0; m <= max; m++){
    //     count[m]=0;
    // }
    for(int i=0 ; i< n; i++){
        ++count[arr[i]];
    }
    // SOLVE THE MERGE SORT PROBLEM (m=0) ???
    int ptr= 0;
    int j=0;
    while(j<= max){
        // this if wil run until the value in every index of count array elemnts becomes zero, and if becomes zero,then this if condition  gives false, and goes to else part, and increment the count array by 1, and same thing repeats
        if(count[j]>0){
            --count[j];
            arr[ptr] = j;//in the arr, we are inserting the index, because, count array holds the count of no. of elements, now hich is being placed in sorted order
            ptr++;//this is the pointer to increment the index of arr every time, to insert the elements in sorted order
        }
        else{
            j++;
        }
    }
}