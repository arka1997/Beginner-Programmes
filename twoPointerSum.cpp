#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int pointerSum(int arr[], int n, int amount);
int main(){
    int n, amount;
    cin >> n;
    cin >> amount;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int flag = pointerSum(arr,n,amount);
    if(flag == false){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
}
int pointerSum(int arr[], int n, int amount){
    int i=0;
    int j=n-1;
    sort(arr, arr + n);
    while(i<j){
        if(arr[i]+arr[j] == amount){
            return true;
            break;
        }
        else if(arr[i]+arr[j] > amount){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}