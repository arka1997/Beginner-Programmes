// this is time complexity of O(n^2)
//we will point the first elemnt in an array i=0, and apply the two pointer sum approach over the rest of the array
//if i=0, doesnot give our soln, we increment it to i=1, and goest upto n,and increse or decrease the other pointer to adjust with the sum
#include <iostream>
#include <bits/stdc++.h>
//Function to find if there exists a triplet in the 
//array A[] which sums up to X
using namespace std;
class Triplet{
    public:
    bool find3TripletNumbers(int A[], int n, int x)
    {  sort(A,A+n);
        for(int l=0;l<n-2;l++){
            int i=l+1;
            // cout << i;
            int j=n-1;
            while(i<j){
                int sum=A[i]+A[j]+A[l];
                cout << sum << ",";
                if(A[l]+A[i]+A[j] == x){
                    return 1;
                }
                else if(A[l]+A[i]+A[j] > x){
                    j--;
                }
                else{
                    i++;
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
		Triplet ob;
        cout <<  ob.find3TripletNumbers(A, n, X) << endl;
}