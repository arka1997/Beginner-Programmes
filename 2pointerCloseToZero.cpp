// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            int i=0;
            int j=n-1;
            sort(arr, arr+n);
            int ans= INT_MAX;
            //here we have used abs because if we found the min of(-2,1), we will get -2 as result, but it is not the closest to zero, answer should be 1, but min returns the minimum of both, so thtswhy
            //we convert everything to positive, and then find the minimum.
            //if we write abs(sum,0), that means we will get sum as a positive integer with no decimal places.ex. abs(3.55,0) -> 3, abs(3.55,1)->3.5, and so on,...the 2nd parameter of abs says the no. of decimal places to be considered
            int first=0;
            int second = 0;
            // sum = arr[i] + arr[j];
            while(i<j){
                if(abs(arr[i]+arr[j]) == 0){
                    ans = arr[i]+arr[j];
                    break;
                }
                
                if(abs(arr[i]+arr[j]) > 0){// DANGER
                    // we cant use min here because, it will always give the positive value as answer, so ans wil be always positive, so we use if else to check minimum
                ans = min(ans,abs(arr[i]+arr[j]));
                // cout << ans;

                    j--;
                }
                else{
                ans = min(ans,abs(arr[i]+arr[j])); //DANGER
                    i++;
                }
            }
            return ans;
        }
};

    int main ()
    {
            int n; 
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            Solution ob;
            cout << ob.closestToZero(arr, n);
    }  