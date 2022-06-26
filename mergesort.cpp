#include <iostream>
using namespace std;
void mergesort(int arr[], int l, int r);
void mmergeArray(int arr[], int l, int mid, int r);
int main(){
    int r;
    cin >> r;
    int arr[r];
    for(int i=0; i< r; i++){
        cin >> arr[i];
    }
    int l=0;
    mergesort(arr, l , r-1);//"r-1" size should be declared otherwise there wil b a zero coming infront everytime, and if r is declared 5, then l=0, so we should pass r-1, otherwise 0 to 5 will return 6 digits, so pass r-1, if we start our l from zero
    for(int k=l;k<r; k++){
        cout << arr[k];
    }
    return 0;
}
void mergeArray(int arr[], int l, int mid, int r){
    // l is the starting index of the first sub array
    int j=mid+1;//this is the starting indes of the second sub array
    int k=l;
    int i=l;
    int arr2[r+1];  //"r+1" is written because if we consider "4-sized array", then, when we are returning r=3, its the last index value of an array, starting from zero. so total size or array is (3+1)
    while(i <= mid && j <= r){  //if the "i" which contains index of first array should be less then the array size of s1, and same for "j"
        if(arr[i] < arr[j]){   //find the first minimum out of two arrays
            arr2[k] = arr[i];
            k++;
            i++;
        }
        else{
            arr2[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<= mid){
        arr2[k] = arr[i];
        k++;
        i++;
    }
    while( j <= r){
        arr2[k] = arr[j];
        k++;
        j++;
    }
    for(int m=l;m<=r;m++){//why m=l and not m=0
        arr[m] = arr2[m];
    }
}
void mergesort(int arr[], int l, int r){
    if(l<r){
    int mid=(l+r)/2;
    mergesort(arr, l, mid);
    mergesort(arr, mid+1, r);
    mergeArray(arr, l, mid, r);
    }
}



 