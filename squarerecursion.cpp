#include<iostream>
using namespace std;
double myPow(double x, int n);
int main(){
    int num, target;
    cin >> num >> target;
    cout << myPow(num,target);
    cout << 1/2;
}
// int myPow(int n, int target){
//     if(target == 1){
//         return n;
//     }
//     return myPow(n,target-1) * n;
// }
    double myPow(double x, int n) {
        
        // if(n==0){
        //     return 1;
        // }
        //  else if(n==1){
        //      return x;
        //  }
        //this is for positive part x^n
        // else if(n>0){
        //  return x*myPow(x,n-1);
        // }
        //this is for negative part x^-n or 2^-3
        // else{
        //  return 1/x*(myPow(x,n+1));
        //  }
        
        // This is solution for o(log n)
        if(n==0){
            return 1;
        }
        // here 1/2 returns 0, for the last node of recursion tree, n will become 1, and n/2 becomes 0,then base case is satisfied
        if(n>0){
        if(n%2!=0){ //for odd cases n=9, 2 * 2^2 *2^2 = 2^5(for odd)
            return x*myPow(x,n/2) * myPow(x,n/2);
        }
        else{ //for even, n=4, 2^2 * 2^2 = 2^4(for even)
             return myPow(x,n/2) * myPow(x,n/2);
        }//2^5 + 2^4 = 2^9
        }
        else{
            if(n%2!=0){ //for odd cases n=9, 2 * 2^2 *2^2 = 2^5(for odd)
            return 1/x*myPow(x,n/2) * myPow(x,n/2);
        }
        else{ //for even, n=4, 2^2 * 2^2 = 2^4(for even)
             return 1/1*(myPow(x,n/2) * myPow(x,n/2));
        }
        }
    }

// vector , string, map, set