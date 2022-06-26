//exra petrol left(initially 0) when we travel from one station to another is subtracted with th initial gas cost to travel to next station, followed by adding the new petrol received from the new station we travelled each time,Ex.0+(4-1) => 3 + (5-2) => 6 +(1 - 3)  => 4 + (2 - 4) => 2 + (4-1)=>5, as we started from i=3 and ended in i=3, completing one round, 
//so answr is i=3.(4-1)+(5-2)+(1-3)+(2-4)+(4-1) >= 0, then its correct.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class GasStation {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//gas = [1,2,3,4,5] ,  cost = [3,4,5,1,2] , gas[]-cost[i] = [-2,-2,-2,3,3], prefixsum = [-2 , -4 , -6 , -3 ,0], here the most minimum is "-6", so the answer is (i+1)th index, pls dry run to check.
// Why it happens?
    // Because if we find the most minimum index in the prefix array, then that means just after that index there is an elemnt which is bigger then that minimum number, and we had started from that index only.
        int sum2 = 0;
        int minIndex = 0;
        int gasSum = 0;
        int costSum = 0;
        int min = INT_MAX;
        for(int i=0;i<gas.size();i++){
            sum2 += (gas[i] - cost[i]);//0+(1-4)=>3 + (5-2) =>6 +(1 - 3)=>4 + (2 - 4) =>2 + (4-1)=>5
            if(sum2 < min){//here checking for the most smallest in the prefixSum array, and then storing it in min, at the end of loop, min wil hold the smallest no.
            minIndex = i;//minIndex wil point to the index of the smallest no in prefixsum
                min = sum2;
            }
            // here we calculate the sum of gas and cost, for checking if gassum is greater then cost sum or not
               gasSum += gas[i];
               costSum += cost[i];
        }
        if(costSum > gasSum){//to check if costSum for going from one station to another is greater then sum of gasSum then we return -1, as if cost is more then the gas, then we can't visit every station.
            return -1;
        }
        //for this input, gas = [3,1,1] , cost = [1,2,2], gs[i]-cost[i] = [2,-1,-1], prefixSum = [(2) , (2+(-1)) , (1+(-1))] => [2,1,0] ->so here the minimum is 0, which is at the end of the index, so thtswhy we use a check if minIndex points to the last index, which is equalto the gas.size()-1, then return "0" which denotes first index.
        if(minIndex == gas.size()-1){
            return 0;
        }
        else{
            return minIndex+1;
        }
    }
};
// 2365
// 4351
//     -2 0 1 4
//     -2-2-1 1//this is for repeatating no. in prefix,when sum2 <= min ,this less than equalto sign is wrong because here the right index will be i=1, but if we  use "<=" in the sum2 <= min, then we get a wrong index of i=2;dry run with this input above.

int main ()
{
        int n,n1,n2; 
        cin >> n;
        vector<int> gas;//while assigning we dont give & reference her, we give reference to these arrays when we send them in another function, there as formal parameter we use & reference so that changes are reflected to the original array
        vector<int> cost;
        for (int i = 0; i < n; i++)
            {cin >> n1;
        gas.push_back(n1);
        }
            for (int i = 0; i < n; i++)
            {cin >> gas[i];
        cost.push_back(n2);
        }
            GasStation obj;
        cout << obj.canCompleteCircuit(gas,cost);
        return 0;
} //2356 , 7810, -5,-5,4,6, -5, -10, -6 , 0
4