#include <iostream>
using namespace std;
class MaxSum{
    public:
    int LargestPairSum(int arr[], int n){
        int i=0;
        // 4,6,5,2
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        //this loop for returning max sum, if max pair was told, then instead of storing values in max1 and max2, just store the index of 1st max in max1 and 2nd max in max2
        while(i<n){
            if(arr[i] > max1){
                max2 = max1;
                max1 = arr[i];
            }
            // special case, for arr=4,6,5,2 , where max1=6, max2=4, now when i points to index 5, then its not bigger then max1, but is larger then max2
            if(arr[i]>max2 && max1!=arr[i]){
                max2 = arr[i];
            }
            i++;
        }
        return max1+max2;
    }
};
int main ()
{
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        MaxSum obj;
        cout << obj.LargestPairSum(arr, n);
}  