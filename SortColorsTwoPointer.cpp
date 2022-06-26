#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class SortColorpointer {
public:
// Pointer "mid" & pointer "hi" will swap when "2" is found, and send it to end
// Pointer "l" & "mid" will swap when "mid" points to a number lesser then "l",and swap them

    void sortColors(vector<int>& nums) {

    // "l" is a pointer whih is used for locating the zeros eleemnt in the front just before it, if array is 1,1,0,0,2 whenever our arr[mid] points to 1,it increases mid by 1 for searching other elemnts, and "l" is kept fixed on one, as mid increases everytime it points to 1,..Now when arr[mid] gets any smaller element then 1 like 0, it swaps the mid value, with "l" index, which previously pointed to 1, and increases both l and mid by 1. " h" is acctually used for inserting the 2th elemmnts at the end. 0's at the front, with help of "l" index.

    //  And mid when points to 1 at first index, increases itself by 1 everytime it points to 1, but when " mid" founds 1, then before increasing,it marks its previous position using "l", so that whenever a smaller value less then 1 is found, we will replace mid with "l".
        int l = 0;
        int mid = 0;
        int hi = nums.size()-1;
        while(mid<=hi){
            if(nums[mid] == 0){
                //when we get zero at first index, that means the value is in correct position,so we increment both l and mid by 1, and if arr = 1,1,0, and arr[mid] points to 1,then we keep l as a mark on first index 1, and increment mid to find if any value smaller then one exist or not, if found, then swap the l index with the mid, which points to anumber smaller then arr[l].
                swap(nums[l++],nums[mid++]);
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 2){
                //here if mid points to 2, then we send it to the last and decrease hi by 1
                swap(nums[hi--],nums[mid]);
            }
        }
    }
};
int main()
{
		vector<int> nums;
		int a,n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a;
			nums.push_back(a);
		}
		SortColorpointer ob;
        ob.sortColors(nums);
		for(int j=0;j<nums.size();j++){
			cout << nums[j];
		}
}