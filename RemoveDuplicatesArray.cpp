#include <iostream>
#include <bits/stdc++.h>
//Function to find if there exists a triplet in the 
//array A[] which sums up to X
using namespace std;
class RemoveDuplicates{
    public:
    int RemoveDuplicatesarr(vector<int>& nums) {
		if(nums.size() == 0){
			return 0;
		}
        int i=0;
            for(int j=1;j<nums.size();j++){
                if(nums[i]!= nums[j]){
                    nums[++i] = nums[j];
                }
            }
        return i+1;
    }
};	
int main()
{
		vector<int> A;
		int a,n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a;
			A.push_back(a);
		}
		RemoveDuplicates ob;
        int index =  ob.RemoveDuplicatesarr(A);
		for(int j=0;j<index;j++){
			cout << A[j];
		}
}