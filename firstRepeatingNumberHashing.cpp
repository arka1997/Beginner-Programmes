#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Repeat{
    public:
    int hashSetRepeat(int arr[],int n){
        set<int> myset;
        // auto x=myset.end();
        int min = -1;
        for(int i = n-1; i >=0; i--){
            if(myset.find(arr[i]) != myset.end() ){//here we search for each elements in the array in hash set, so if we find the element to be searched in the hash set, that means the elemnt is already pushed in previous indexes(by code in else case), and now we get another repetating same value in another index of the array, then we just update the min for that particular index, becuase we got our repeating index
            //now we again traverse from last to first, and whenever we get a repeated value which is already pushed earlier, we just update the index to min, thus at the end we will see that we have got our "min" variable storing the first repeating element's index inside it, and thtswhy we traverse from the last
                min = i+1;//we got our minimum index updated to index i, because in this block, we wil enter only if an elemnt with same value is already inserted previously, so now we can update min, as elemnt is already present, and we have our repeating element
            }
            //now for else part, we come here only when arr[i]th element is not present in the hash set, and myset.find() returns the last element index, which is equal to  myset.end() value, then if condition does not satisfies, (3! = 3) gives false, so in else case, that number is added to hash set
            else{
                myset.insert(arr[i]);
            }
        }
        return min;
    }
};
int main ()
{
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            {cin >> arr[i];}
            Repeat obj;
        cout << obj.hashSetRepeat(arr,n);
        return 0;
} 