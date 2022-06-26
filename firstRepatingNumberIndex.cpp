#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Repeat{
    public:
    int binarySearchlower(int arr[],int n, int num){
    sort(arr, arr+n);
    int low = 0;
    int hi = n-1;
    int result =-1;
    while(low <= hi){
        int mid = (low+hi)/2;
        if(num == arr[mid]){
            result = mid;
            hi = mid -1;//we are doing this because if we get one number,using binary search, then it may not be the lowest occurence, there can be numbers before it, so we do hi = mid -1, and check if there is any number equalto that current number or not, 
            //thus we get lowest occurence of number, in arr ={2,4,4,4,5},nd our number is "4" whose lower index is to be found,then suppose mid points to 2th index, but instead of returning that index, we should see, if there are any numbers same as "4" in the lower index also, 
            //in arr= {2,4,4,4,5}, the lowest index is 1th index for num=4 nd not i=2, so we go on decreasing hi-1, to get the lowest index of given number

        }
        else if(num<arr[mid]){
            hi = mid-1;
        }
        else 
        low = mid+1;
    }
    return result;
}
int binarySearchupper(int arr[],int n, int num){
    sort(arr, arr+n);
    int low = 0;
    int hi = n-1;
    int result = -1;
    while(low <= hi){
        int mid = (low+hi)/2;
        if(num >= arr[mid]){//if we find the mid elemnt to be same, then we traverse left, to see if the "num" as any minimum occurence then current one
            result = mid;//storing mid, considering it to be the minimum index til now
            low = mid +1;//traverse left for minimum occurence
        }//{0,1,2,3 4,4,5}
        else{
            hi = mid-1;
        }
       
    }
    return result;
}
};

int main ()
{
    //create an auxillary or temporary araay from the original array, and make changes to that temporary array, otherwise, if we make change in original array, value or index are changed.
        int n; 
        cin >> n;
        int arr[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
            {cin >> arr[i];}
        for(int k=0;k<n;k++){//here creating the auxillary array by copying data from arr to arr2
                arr2[k] = arr[k];
    }
        int occurences = -1;
    for(int i=0; i<n; i++){
        cout << "start" << arr[i] << "\n";
        Repeat s1;
    int lowerbound = s1.binarySearchlower(arr, n , arr2[i]);//if no repetition, then value of lowerbound and upper bound is same
        // cout << lowerbound;
        int upperbound = s1.binarySearchupper(arr, n , arr2[i]);
        // cout << upperbound << "\n";
        if(upperbound-lowerbound > 0){
            occurences = i;//here I am getting the index of the sorted array
            break;
        }
    }
    cout << occurences;
    return 0;
} 