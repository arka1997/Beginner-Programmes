class Solution {
    public:
    int coinrec(vector<int> coins, int amnt,int currcoins, int count, int min){
        
        if(amnt == 0){
            return 1;
        }
        if(amnt < 0){
            return 0;
        }
        int sum =0;
       for(int i=currcoins; i< coins.size(); i++){
           sum = coinrec(coins, amnt - coins[i],i,count+1,min);
           if(sum == 1){
               if(count<min)
               min = count;
               cout << min;
               }
           }
           count--;
        
        return min;
        }
public:
    int coinChange(vector<int>& coins, int amount) {
        int min = INT_MAX;
        return coinrec(coins , amount, 0, 0, min);
    }
};