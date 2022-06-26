// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<int> mystack;
        // initially we take an arr2 which will be initialized by -1
        vector<long long> arr2(n);
        for(int i=0;i<n;i++){
            arr2[i] = -1;
        }
        int i=0;
        while(i<n){
            if(mystack.empty()){//when ever our stack is empty,then there is two cases, either i == n, so then we just break from the loop,or the existing stack elemnts have found their next greater elemnt, and pops out, and then we push next remaining eleemnts to find their next greater and push them 
                if(i == n){
                    break;
                } //
                mystack.push(i);//here we push values when our stack is empty
                i++;
            }
            //here we check if our current arr[i] is greater then values in the topmost index of stack
            else if(arr[i] > arr[mystack.top()]){//if true, then we insert the greater element, which is current arr[i], to indexes of another aux arr2
                arr2[mystack.top()] = arr[i];// ex. arr[i] =4 , stack[]=[5,3,2], now 4 is greater then 3 & 2, so we assign their index with arr[i] in another array
                mystack.pop();//after inserting, we pop them out
            }
            else{//else we again push elemtns
                mystack.push(i++);
            }
        }
        for(int k=0;k<n;k++){//copying elemnts
            arr[k] = arr2[k];
        }
        return arr;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends