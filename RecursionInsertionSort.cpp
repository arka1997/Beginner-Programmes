#include <iostream>
using namespace std;
void insertionsort(int arr[], int n, int x);
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int x=n-1;// this is being done because recursion should run from 0 to 2, if n=3, so n will always run from 0 to 3 only, so thtswhy we are taking x which will have a size always less then n by 1.so n-1.
    insertionsort(arr, n, x);
    for(int k=0;k<n;k++){
    cout << arr[k];
}
}

void insertionsort(int arr[], int n, int x){
    if(x==0){
        return;//recursion termination to prevent infinite execution, when base case is satisfied
    }
    insertionsort(arr , n, x-1);
        int key = arr[x];
        int j=x-1;
         while(j>=0 && key < arr[j])  //in insertion if "key" is greater then previous number, when sorting starts,  then the loop doesnot continues, because key will only be greater then previous number if the previous values are already sorted
        {  
            arr[j+1] = arr[j]; 
            j = j-1; 
        }
        arr[j+1]=key;
}

