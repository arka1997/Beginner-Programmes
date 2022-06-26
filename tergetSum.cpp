#include<iostream>
using namespace std;
int demoFunc(int arr[], int target, int n);
int main(){
    int n,target;
    cin >> n;
    cin >> target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    demoFunc(arr,target,n);
    cout << arr[0] << ",";
    for(int i=0;i<1;i++){
        cout << arr[i];
    }
}
int demoFunc(int arr[], int target, int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j] > target){
            j--;
        }
        else if(arr[i]+arr[j] < target){
            i++;
        }
        else{
            arr[0] = i;
            arr[1] = j;
        }
    }
    return 0;
}