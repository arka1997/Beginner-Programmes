#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class LeftSmalRightLarge{
    public:
    int LeftSmallRightGreat(int arr[],int n){
        int nextGreater[n];
        int nextmin[n];
        nextGreater[0] = arr[0];
        nextmin[n-1] = arr[n-1];
        for(int i=1;i<n;i++){
            nextGreater[i] = max(nextGreater[i-1] , arr[i]);
        }
        for(int j=n-2;j>=0;j--){
            nextmin[j] = min(nextmin[j+1] , arr[j]);
        }
        for(int l = 1; l< n-1; l++){
            if(arr[l] >= nextGreater[l-1] && arr[l] <= nextmin[l+1]){
                return arr[l];
            }
        }
        return -1;
    }
};
int main ()
{
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            {cin >> arr[i];}
            LeftSmalRightLarge obj;
        cout << obj.LeftSmallRightGreat(arr,n);
        return 0;
} 