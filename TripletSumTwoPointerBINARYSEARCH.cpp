//this is an approache of binary Search with O(n^2) complexity, where we hold two indexes of an array, first nd second, and then apply binary search to rest of the array, and therby increment i and j for getting our triplet sum
#include <iostream>
#include <bits/stdc++.h>
//Function to find if there exists a triplet in the 
//array A[] which sums up to X.#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int binarySearch(int A[], int s, int e, int num){
    while(s<=e){
    int mid = s+(e-s)/2;
        if(num == A[mid]){
            cout << "start:" << s << ",";
            cout << A[mid] << ",";
            cout << num;
            cout << "end:" << e << ",";
            return 1;
        }
        if(num > A[mid]){
            s = mid + 1;
        }
        if(num < A[mid]){
            e = mid - 1;
        }
    }
    return -1;
}
    bool find3Numbers(int A[], int n, int x)
    {   sort(A,A+n);//DO SORTING TO PERFORM BINARY
        int bools;
        for(int i=0;i<n-2;i++){
            for(int j=i+1; j<n-1;j++){
                int sub = abs(x-(A[i]+A[j]));
                if(sub < x){
                cout << "sub:" << sub;
                    bools = binarySearch(A, j+1, n-1, sub);
                }
                // cout << bools;-1-1-1-1-1-10
                if(bools == 1){ 
                    return 1;
                }
                }
        }
        return false;
    }
};

// { Driver Code Starts.

int main()
{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
}
  // } Driver Code Ends