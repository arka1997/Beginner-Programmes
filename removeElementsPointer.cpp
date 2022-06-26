#include <iostream>
#include <bits/stdc++.h>
//Function to find if there exists a triplet in the 
//array A[] which sums up to X
using namespace std;
class removeElements {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
//         here we are first checking if the Jth elemnt is different as val or not, if yes, we swap, and increment i,
        for(int j=0;j<nums.size();j++){
            if(nums[j] != val){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
        }
        return i;
    }
};	
int main()
{
		vector<int> A;
		int a,n,val;
		cin >> n;
        cin >> val;
		for(int i=0;i<n;i++){
			cin >> a;
			A.push_back(a);
		}
		removeElements ob;
        int index =  ob.removeElement(A,val);
		for(int j=0;j<index;j++){
			cout << A[j];
		}
}