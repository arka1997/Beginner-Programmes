#include <iostream>
#include <algorithm>
using namespace std;
int Smallest(int arr[], int k, int n);
int main(){
    int n,k;
    cin >> n;
    cin >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout << Smallest(arr,k,n);
}
int Smallest(int arr[],int k, int n){
    //7,10,4,3,20,15
    sort(arr,arr+n);
    //3,4,7,10,15,20
    return arr[k-1];
}